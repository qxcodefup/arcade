package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	s := bufio.NewScanner(os.Stdin)
	s.Scan()
	broken := s.Text()
	s.Scan()
	number := s.Text()
	out := ""
	for _, c := range number {
		if string(c) != broken {
			out += string(c)
		}
	}
	i := 0
	for i < len(out)-1 && out[i] == '0' {
		i++
	}
	if out[i:] == "" {
		fmt.Println(0)
	} else {
		fmt.Println(out[i:])
	}
}
