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
	options := []string{"paper", "air", "water", "gun", "rock", "fire", "scissors", "human", "sponge"}
	ia, ib := -1, -1
	for i, w := range options {
		if w == a {
			ia = i
		}
		if w == b {
			ib = i
		}
	}
	if ia == ib {
		fmt.Println("empate")
	} else {
		d := (ib - ia + 9) % 9
		if d >= 1 && d <= 4 {
			fmt.Println("jog1")
		} else {
			fmt.Println("jog2")
		}
	}
}
