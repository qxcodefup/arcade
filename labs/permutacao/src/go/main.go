package main

import (
	"bufio"
	"fmt"
	"os"
)

func next(s []byte) bool {
	i := len(s) - 2
	for i >= 0 && s[i] >= s[i+1] {
		i--
	}
	if i < 0 {
		return false
	}
	j := len(s) - 1
	for s[j] <= s[i] {
		j--
	}
	s[i], s[j] = s[j], s[i]
	for a, b := i+1, len(s)-1; a < b; a, b = a+1, b-1 {
		s[a], s[b] = s[b], s[a]
	}
	return true
}
func main() {
	s := bufio.NewScanner(os.Stdin)
	s.Scan()
	value := []byte(s.Text())
	s.Scan()
	n := 0
	fmt.Sscan(s.Text(), &n)
	for i := 0; i < n; i++ {
		if !next(value) {
			break
		}
	}
	fmt.Println(string(value))
}
