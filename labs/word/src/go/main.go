package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	s := bufio.NewScanner(os.Stdin)
	s.Scan()
	text := []rune(s.Text())
	s.Scan()
	mode := s.Text()
	wordStart := true
	for i, c := range text {
		switch mode {
		case "M":
			if c >= 'a' && c <= 'z' {
				text[i] = c - 32
			}
		case "m":
			if c >= 'A' && c <= 'Z' {
				text[i] = c + 32
			}
		case "i":
			if c >= 'a' && c <= 'z' {
				text[i] = c - 32
			} else if c >= 'A' && c <= 'Z' {
				text[i] = c + 32
			}
		case "p":
			if c == ' ' || c == '-' || c == '!' || c == ',' || c == '.' {
				wordStart = true
			} else if wordStart {
				if c >= 'a' && c <= 'z' {
					text[i] = c - 32
				}
				wordStart = false
			} else if c >= 'A' && c <= 'Z' {
				text[i] = c + 32
			}
		}
	}
	result := string(text)
	if mode == "p" {
		words := strings.Split(result, " ")
		for i, w := range words {
			if len(w) == 1 && (w == "A" || w == "E" || w == "O") {
				words[i] = strings.ToLower(w)
			}
		}
		result = strings.Join(words, " ")
	}
	fmt.Println(result)
}
