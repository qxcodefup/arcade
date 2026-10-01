package main

import (
	"bufio"
	"fmt"
	"os"
)

func primeiraSilaba(palavra []rune) int {
	for i := 0; i+1 < len(palavra); i++ {
		vogal := palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u' || palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U'
		letra := palavra[i+1]
		consoante := letra >= 'a' && letra <= 'z' || letra >= 'A' && letra <= 'Z'
		consoante = consoante && letra != 'a' && letra != 'e' && letra != 'i' && letra != 'o' && letra != 'u' && letra != 'A' && letra != 'E' && letra != 'I' && letra != 'O' && letra != 'U'
		if vogal && consoante {
			return i + 1
		}
	}
	return len(palavra)
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	texto := []rune(scanner.Text())
	resultado := []rune{}
	for i := 0; i < len(texto); {
		if !((texto[i] >= 'a' && texto[i] <= 'z') || (texto[i] >= 'A' && texto[i] <= 'Z')) {
			resultado = append(resultado, texto[i])
			i++
			continue
		}
		inicio := i
		for i < len(texto) && ((texto[i] >= 'a' && texto[i] <= 'z') || (texto[i] >= 'A' && texto[i] <= 'Z')) {
			i++
		}
		palavra := texto[inicio:i]
		corte := primeiraSilaba(palavra)
		if corte < len(palavra) {
			resultado = append(resultado, palavra[:corte]...)
			resultado = append(resultado, palavra[:corte]...)
		}
		resultado = append(resultado, palavra...)
	}
	fmt.Println(string(resultado))
}
