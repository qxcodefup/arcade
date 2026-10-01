package main

import (
	"bufio"
	"fmt"
	"os"
)

func lower(c byte) byte {
	if c >= 'A' && c <= 'Z' {
		return c + 32
	}
	return c
}
func main() {
	s := bufio.NewScanner(os.Stdin)
	s.Scan()
	text := s.Text()
	s.Scan()
	target := lower(s.Text()[0])
	n := 0
	for i := 0; i < len(text); i++ {
		if lower(text[i]) == target {
			n++
		}
	}
	fmt.Println(n)
}
