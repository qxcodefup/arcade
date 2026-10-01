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
	var cases int
	fmt.Sscan(scanner.Text(), &cases)
	for i := 0; i < cases; i++ {
		if !scanner.Scan() {
			return
		}
		text := []rune(scanner.Text())
		firstUpper := false
		for _, char := range text {
			if char >= 'a' && char <= 'z' {
				break
			}
			if char >= 'A' && char <= 'Z' {
				firstUpper = true
				break
			}
		}
		letterIndex := 0
		for j, char := range text {
			if char == ' ' {
				continue
			}
			upper := firstUpper
			if letterIndex%2 == 1 {
				upper = !upper
			}
			if char >= 'a' && char <= 'z' && upper {
				text[j] = char - ('a' - 'A')
			} else if char >= 'A' && char <= 'Z' && !upper {
				text[j] = char + ('a' - 'A')
			}
			letterIndex++
		}
		fmt.Println(string(text))
	}
}
