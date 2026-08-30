package main

import (
	"fmt"
)

func isLower(r rune) bool {
	return r >= 'a' && r <= 'z'
}
func isUpper(r rune) bool {
	return r >= 'A' && r <= 'Z'
}

func toUpper(r rune) rune {
	return r - 'a' + 'A'
}

func toLower(r rune) rune {
	return r - 'A' + 'a'
}

func input() string {
	var line []rune
	var c rune
	for {
		fmt.Scanf("%c", &c)
		if c == '\n' {
			break
		} 
		line = append(line, c)
	}
	return string(line)
}

func main() {
	// scanner := bufio.NewScanner(os.Stdin) // cria um leitor
	// scanner.Scan()                        // le a linha
	var texto string = input() // interpreta a linha como texto
	saida := ""
	// Percorre cada caractere
	for _, x := range texto {
		switch {
		case isLower(x):
			saida += string(toUpper(x))
		case isUpper(x):
			saida += string(toLower(x))
		default:
			saida += string(x)
		}
	}
	fmt.Println(saida)
}
