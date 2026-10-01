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
	if !scanner.Scan() {
		return
	}
	target := []rune(scanner.Text())
	count := 0
	if len(target) > 0 {
		for start := 0; start+len(target) <= len(text); start++ {
			matches := true
			for i := range target {
				if text[start+i] != target[i] {
					matches = false
					break
				}
			}
			if matches {
				count++
			}
		}
	}
	fmt.Println(count)
}
