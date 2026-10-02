package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

const alfabeto = "ABCDEFGHIJKLMNOPQRSTUVXYZ"

type Grade struct {
	letras  [5][5]rune
	posicao map[rune][2]int
}

func main() {
	if len(os.Args) != 3 || (os.Args[1] != "cifrar" && os.Args[1] != "decifrar") {
		fmt.Println("Uso: programa cifrar|decifrar arquivo")
		return
	}

	conteudo, err := os.ReadFile(os.Args[2])
	if err != nil {
		fmt.Println("Não foi possível ler o arquivo.")
		return
	}

	fmt.Print("Digite a chave:\n")
	entrada := bufio.NewScanner(os.Stdin)
	if !entrada.Scan() {
		return
	}

	grade, ok := criarGrade(entrada.Text())
	if !ok {
		fmt.Println("A chave deve conter letras de A a Z, exceto W.")
		return
	}

	texto, ok := normalizar(string(conteudo))
	if !ok {
		fmt.Println("O texto deve conter letras de A a Z e espaços, exceto W.")
		return
	}

	var resultado string
	var nomeSaida string
	if os.Args[1] == "cifrar" {
		resultado = cifrar(grade, preparar(texto))
		nomeSaida = "cifra.txt"
		fmt.Println("O texto cifrado eh:")
	} else {
		pares, valido := formarPares(texto)
		if !valido {
			fmt.Println("O texto cifrado deve conter uma quantidade par de letras.")
			return
		}
		resultado = decifrar(grade, pares)
		nomeSaida = "texto.txt"
		fmt.Println("O texto decifrado eh:")
	}

	formatado := separarPares(resultado)
	fmt.Println(formatado)
	if err := os.WriteFile(nomeSaida, []byte(formatado+"\n"), 0644); err != nil {
		fmt.Println("Não foi possível gravar o arquivo de saída.")
	}
}

func criarGrade(chave string) (Grade, bool) {
	texto, ok := normalizarChave(chave)
	if !ok || texto == "" {
		return Grade{}, false
	}

	grade := Grade{posicao: make(map[rune][2]int)}
	sequencia := make([]rune, 0, 25)
	for _, letra := range texto + alfabeto {
		if _, existe := grade.posicao[letra]; existe {
			continue
		}
		grade.posicao[letra] = [2]int{}
		sequencia = append(sequencia, letra)
	}

	grade.posicao = make(map[rune][2]int)
	for i, letra := range sequencia {
		linha := i / 5
		coluna := i % 5
		grade.letras[linha][coluna] = letra
		grade.posicao[letra] = [2]int{linha, coluna}
	}
	return grade, true
}

func normalizarChave(chave string) (string, bool) {
	chave = strings.ToUpper(chave)
	resultado := make([]rune, 0, len(chave))
	for _, letra := range chave {
		if letra == ' ' || letra == '\n' || letra == '\r' || letra == '\t' || letra == 'W' {
			continue
		}
		if letra < 'A' || letra > 'Z' {
			return "", false
		}
		resultado = append(resultado, letra)
	}
	return string(resultado), true
}

func normalizar(texto string) (string, bool) {
	texto = strings.ToUpper(texto)
	resultado := make([]rune, 0, len(texto))
	for _, letra := range texto {
		if letra == ' ' || letra == '\n' || letra == '\r' || letra == '\t' {
			continue
		}
		if letra < 'A' || letra > 'Z' || letra == 'W' {
			return "", false
		}
		resultado = append(resultado, letra)
	}
	return string(resultado), true
}

func preparar(texto string) []rune {
	letras := []rune(texto)
	pares := make([]rune, 0, len(letras)+1)
	for i := 0; i < len(letras); {
		primeira := letras[i]
		if i+1 == len(letras) {
			pares = append(pares, primeira, preenchimento(primeira))
			i++
			continue
		}
		if primeira == letras[i+1] {
			pares = append(pares, primeira, preenchimento(primeira))
			i++
			continue
		}
		pares = append(pares, primeira, letras[i+1])
		i += 2
	}
	return pares
}

func preenchimento(letra rune) rune {
	if letra == 'X' {
		return 'Z'
	}
	return 'X'
}

func formarPares(texto string) ([]rune, bool) {
	letras := []rune(texto)
	if len(letras)%2 != 0 {
		return nil, false
	}
	return letras, true
}

func cifrar(grade Grade, pares []rune) string {
	return transformar(grade, pares, 1)
}

func decifrar(grade Grade, pares []rune) string {
	return transformar(grade, pares, -1)
}

func transformar(grade Grade, pares []rune, direcao int) string {
	resultado := make([]rune, 0, len(pares))
	for i := 0; i < len(pares); i += 2 {
		primeira := grade.posicao[pares[i]]
		segunda := grade.posicao[pares[i+1]]
		if primeira[0] == segunda[0] {
			resultado = append(resultado,
				grade.letras[primeira[0]][(primeira[1]+direcao+5)%5],
				grade.letras[segunda[0]][(segunda[1]+direcao+5)%5],
			)
		} else if primeira[1] == segunda[1] {
			resultado = append(resultado,
				grade.letras[(primeira[0]+direcao+5)%5][primeira[1]],
				grade.letras[(segunda[0]+direcao+5)%5][segunda[1]],
			)
		} else {
			resultado = append(resultado,
				grade.letras[primeira[0]][segunda[1]],
				grade.letras[segunda[0]][primeira[1]],
			)
		}
	}
	return string(resultado)
}

func separarPares(texto string) string {
	pares := make([]string, 0, len(texto)/2)
	for i := 0; i < len(texto); i += 2 {
		pares = append(pares, texto[i:i+2])
	}
	return strings.Join(pares, " ")
}
