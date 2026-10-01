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
	out := ""
	space := false
	for _, c := range text {
		if c == ' ' {
			if !space {
				out += " "
			}
			space = true
		} else {
			out += string(c)
			space = false
		}
	}
	fmt.Println(out)
}
