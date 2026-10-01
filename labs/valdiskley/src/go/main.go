package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	s := bufio.NewScanner(os.Stdin)
	s.Scan()
	letter := s.Text()[0]
	s.Scan()
	rot := 0
	fmt.Sscan(s.Text(), &rot)
	pos := (int(letter-'a') + rot) % 26
	if pos < 0 {
		pos += 26
	}
	fmt.Println(string(byte('a' + pos)))
}
