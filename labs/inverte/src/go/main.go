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
	line := []rune(scanner.Text())
	if len(line) == 0 {
		return
	}
	char := line[0]
	if char >= 'a' && char <= 'z' {
		char -= 'a' - 'A'
	} else if char >= 'A' && char <= 'Z' {
		char += 'a' - 'A'
	}
	fmt.Println(string(char))
}
