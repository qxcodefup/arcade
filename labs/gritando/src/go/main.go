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
	for _, char := range scanner.Text() {
		if char >= 'a' && char <= 'z' {
			fmt.Printf("%c", char-('a'-'A'))
		} else if char >= 'A' && char <= 'Z' {
			fmt.Printf("%c", char+('a'-'A'))
		} else {
			fmt.Printf("%c", char)
		}
	}
	fmt.Println()
}
