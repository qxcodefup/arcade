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
	line := ""
	for i := 0; i < len(text); i++ {
		if text[i] == '#' || text[i] == ';' {
			fmt.Println(line)
			line = ""
		} else {
			line += string(text[i])
		}
	}
	if line != "" {
		fmt.Println(line)
	}
}
