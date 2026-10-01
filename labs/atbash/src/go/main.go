package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	s := bufio.NewScanner(os.Stdin)
	s.Scan()
	text := []byte(s.Text())
	s.Scan()
	a := s.Text()
	s.Scan()
	b := s.Text()
	for i, c := range text {
		for j := 0; j < len(a) && j < len(b); j++ {
			if c == a[j] {
				text[i] = b[j]
				break
			}
			if c == b[j] {
				text[i] = a[j]
				break
			}
		}
	}
	fmt.Println(string(text))
}
