package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	s := bufio.NewScanner(os.Stdin)
	s.Scan()
	text := s.Text()
	s.Scan()
	guesses := s.Text()
	s.Scan()
	marker := s.Text()[0]
	out := []byte(text)
	for i, c := range out {
		if c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' {
			found := false
			for j := 0; j < len(guesses); j++ {
				if c == guesses[j] || c+32 == guesses[j] || c-32 == guesses[j] {
					found = true
				}
			}
			if !found {
				out[i] = marker
			}
		}
	}
	fmt.Println(string(out))
}
