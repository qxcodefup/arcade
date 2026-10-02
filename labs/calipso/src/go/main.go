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
	var cases int
	fmt.Sscan(scanner.Text(), &cases)
	for i := 0; i < cases; i++ {
		if !scanner.Scan() {
			return
		}
		text := []rune(scanner.Text())
		firstUpper := false
		for _, char := range text {
			if unicode.IsLetter(char) {
				firstUpper = unicode.IsUpper(char)
				break
			}
		}
		letterIndex := 0
		for j, char := range text {
			if !unicode.IsLetter(char) {
				continue
			}
			upper := firstUpper
			if letterIndex%2 == 1 {
				upper = !upper
			}
			if upper {
				text[j] = unicode.ToUpper(char)
			} else {
				text[j] = unicode.ToLower(char)
			}
			letterIndex++
		}
		fmt.Println(string(text))
	}
}
