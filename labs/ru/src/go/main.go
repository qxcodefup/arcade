package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	if !scanner.Scan() {
		return
	}
	vowels := ""
	consonants := ""
	for _, char := range scanner.Text() {
		switch char {
		case 'a', 'á', 'à', 'â', 'ã', 'e', 'é', 'ê', 'i', 'í', 'o', 'ó', 'ô', 'õ', 'u', 'ú':
			vowels += string(char)
		case ' ':
		default:
			consonants += string(char)
		}
	}
	fmt.Println(vowels)
	fmt.Println(consonants)
}
