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
	text, old, replacement := lines[0], lines[1], lines[2]
	if old == "" {
		fmt.Println(text)
		return
	}
	result := ""
	for i := 0; i < len(text); {
		if i+len(old) <= len(text) && text[i:i+len(old)] == old {
			result += replacement
			i += len(old)
		} else {
			result += text[i : i+1]
			i++
		}
	}
	fmt.Println(result)
}
