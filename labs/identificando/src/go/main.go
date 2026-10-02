package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
	"unicode"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	if !scanner.Scan() {
		return
	}
	fields := strings.Fields(scanner.Text())
	for i, field := range fields {
		if i > 0 {
			fmt.Print(" ")
		}
		fmt.Print(classificar(field))
	}
	fmt.Println()
}

func classificar(elemento string) string {
	for _, caractere := range elemento {
		if unicode.IsLetter(caractere) {
			return "str"
		}
	}
	if numeroValido(elemento, false) {
		return "int"
	}
	if numeroValido(elemento, true) {
		return "float"
	}
	return "str"
}

func numeroValido(texto string, decimal bool) bool {
	caracteres := []rune(texto)
	indice := 0
	if len(caracteres) > 0 && caracteres[0] == '-' {
		indice++
	}
	inicioDigitos := indice
	for indice < len(caracteres) && caracteres[indice] >= '0' && caracteres[indice] <= '9' {
		indice++
	}
	if indice == inicioDigitos {
		return false
	}
	if indice == len(caracteres) {
		return !decimal
	}
	if !decimal || caracteres[indice] != '.' {
		return false
	}
	indice++
	inicioDecimais := indice
	for indice < len(caracteres) && caracteres[indice] >= '0' && caracteres[indice] <= '9' {
		indice++
	}
	return indice == len(caracteres) && indice > inicioDecimais
}
