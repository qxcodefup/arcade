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
	words := []rune{}
	word := ""
	for _, char := range scanner.Text() {
		if char == ' ' {
			words = append(words, []rune(word)...)
			words = append(words, 0)
			word = ""
		} else {
			word += string(char)
		}
	}
	words = append(words, []rune(word)...)
	previous := ""
	current := ""
	ordered := true
	for _, char := range words {
		if char == 0 {
			if previous != "" && previous > current {
				ordered = false
			}
			previous, current = current, ""
		} else {
			current += string(char)
		}
	}
	if previous != "" && previous > current {
		ordered = false
	}
	if ordered {
		fmt.Println("sim")
	} else {
		fmt.Println("nao")
	}
}
