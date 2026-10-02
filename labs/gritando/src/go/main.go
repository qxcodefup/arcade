package main

import (
	"bufio"
	"fmt"
	"os"
	"unicode"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	if !scanner.Scan() {
		return
	}
	result := make([]rune, 0, len(scanner.Text()))
	for _, char := range scanner.Text() {
		if unicode.IsLower(char) {
			result = append(result, unicode.ToUpper(char))
		} else if unicode.IsUpper(char) {
			result = append(result, unicode.ToLower(char))
		} else {
			result = append(result, char)
		}
	}
	fmt.Println(string(result))
}
