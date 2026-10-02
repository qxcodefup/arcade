package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	lines := make([]string, 3)
	for i := range lines {
		if !scanner.Scan() {
			return
		}
		lines[i] = scanner.Text()
	}
	text := []rune(lines[0])
	old := []rune(lines[1])
	replacement := []rune(lines[2])
	if len(old) == 0 {
		fmt.Println(string(text))
		return
	}
	result := make([]rune, 0, len(text))
	for i := 0; i < len(text); {
		matches := i+len(old) <= len(text)
		for j := range old {
			if !matches || text[i+j] != old[j] {
				matches = false
				break
			}
		}
		if matches {
			result = append(result, replacement...)
			i += len(old)
		} else {
			result = append(result, text[i])
			i++
		}
	}
	fmt.Println(string(result))
}
