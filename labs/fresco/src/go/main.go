package main

import (
	"bufio"
	"fmt"
	"os"
)

func isVowel(char rune) bool {
	return char == 'a' || char == 'e' || char == 'i' || char == 'o' || char == 'u'
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	if !scanner.Scan() {
		return
	}
	input := []rune(scanner.Text())
	result := make([]rune, 0, len(input))
	for i, char := range input {
		if char == ' ' && i > 0 && i+1 < len(input) && isVowel(input[i-1]) && isVowel(input[i+1]) {
			continue
		}
		result = append(result, char)
	}
	fmt.Println(string(result))
}
