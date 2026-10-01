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
	words := strings.Split(s.Text(), " ")
	counts := [26]int{}
	for _, c := range words[0] {
		if c >= 'a' && c <= 'z' {
			counts[c-'a'] = 1
		}
	}
	for _, w := range words[1:] {
		seen := [26]bool{}
		for _, c := range w {
			if c >= 'a' && c <= 'z' {
				seen[c-'a'] = true
			}
		}
		for i := 0; i < 26; i++ {
			if !seen[i] {
				counts[i] = 0
			}
		}
	}
	total := 0
	for _, v := range counts {
		total += v
	}
	fmt.Println(total)
}
