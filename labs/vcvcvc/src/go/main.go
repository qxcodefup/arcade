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
		if char == ' ' {
			fmt.Print(" ")
		} else {
			switch char {
			case 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U':
				fmt.Print("v")
			default:
				fmt.Print("c")
			}
		}
	}
	fmt.Println()
}
