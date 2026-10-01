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
	key := s.Text()
	s.Scan()
	op := s.Text()
	out := []byte(text)
	j := 0
	for i, c := range out {
		if c >= 'a' && c <= 'z' {
			shift := int(key[j%len(key)] - 'a')
			if op == "-" {
				shift = -shift
			}
			out[i] = byte((int(c-'a')+shift+26)%26) + 'a'
			j++
		}
	}
	fmt.Println(string(out))
}
