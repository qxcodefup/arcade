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
	text := []rune(scanner.Text())
	var start, count int
	if !scanner.Scan() {
		return
	}
	if _, err := fmt.Sscan(scanner.Text(), &start); err != nil {
		return
	}
	if !scanner.Scan() {
		return
	}
	if _, err := fmt.Sscan(scanner.Text(), &count); err != nil {
		return
	}
	if start < 0 || start >= len(text) || count <= 0 {
		fmt.Println()
		return
	}
	end := len(text)
	if count < len(text)-start {
		end = start + count
	}
	fmt.Println(string(text[start:end]))
}
