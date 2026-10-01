package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	s := bufio.NewScanner(os.Stdin)
	s.Scan()
	a := s.Text()
	s.Scan()
	b := s.Text()
	i, j := len(a)-1, 0
	for i >= 0 && j < len(b) && a[i] == b[j] {
		i--
		j++
	}
	fmt.Println(a[:i+1] + b[j:])
}
