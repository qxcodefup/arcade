package main

import (
	"bufio"
	"fmt"
	"os"
)

func vowels(s string) int {
	n := 0
	for _, c := range s {
		if c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' {
			n++
		}
	}
	return n
}
func main() {
	s := bufio.NewScanner(os.Stdin)
	s.Scan()
	a := s.Text()
	s.Scan()
	b := s.Text()
	score := 0
	if a[0] == b[0] {
		score += 20
	}
	if len(a) == len(b) {
		score += 30
	}
	if vowels(a) == vowels(b) {
		score += 30
	}
	lastVowel := func(name string) bool {
		c := name[len(name)-1]
		return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'
	}
	av := lastVowel(a)
	bv := lastVowel(b)
	if av == bv {
		score += 20
	} else {
		score -= 10
	}
	if score < 0 {
		score = 0
	}
	fmt.Print("As chances do crush te dar bola sao: ", score, "%!\n")
}
