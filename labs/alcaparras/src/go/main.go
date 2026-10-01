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
	target := []rune(s.Text())[0]
	count := 0
	for _, c := range text {
		if c == target {
			count++
		}
	}
	fmt.Println(count)
}
