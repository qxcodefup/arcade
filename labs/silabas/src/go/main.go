package main

import (
	"bufio"
	"fmt"
	"os"
)

func vowel(c byte) bool {
	return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'
}
func main() {
	s := bufio.NewScanner(os.Stdin)
	for s.Scan() {
		line := s.Text()
		out := ""
		for i := 0; i < len(line); i++ {
			out += string(line[i])
			if vowel(line[i]) && i+1 < len(line) && !vowel(line[i+1]) && line[i+1] != ' ' && line[i+1] != '-' {
				out += "-"
			}
		}
		fmt.Println(out)
	}
}
