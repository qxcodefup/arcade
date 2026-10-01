package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	s := bufio.NewScanner(os.Stdin)
	s.Scan()
	n := 0
	fmt.Sscan(s.Text(), &n)
	iron, captain := 0, 0
	bestName := ""
	bestPower := -1
	for i := 0; i < n; i++ {
		s.Scan()
		name := s.Text()
		s.Scan()
		p := 0
		fmt.Sscan(s.Text(), &p)
		iron += p
		if p > bestPower {
			bestPower = p
			bestName = name
		}
	}
	s.Scan()
	fmt.Sscan(s.Text(), &n)
	for i := 0; i < n; i++ {
		s.Scan()
		name := s.Text()
		s.Scan()
		p := 0
		fmt.Sscan(s.Text(), &p)
		captain += p
		if p > bestPower {
			bestPower = p
			bestName = name
		}
	}
	if captain > iron {
		fmt.Println("Team Captain Wins")
	} else if iron > captain {
		fmt.Println("Team Iron Wins")
	} else {
		fmt.Println("Draw")
	}
	fmt.Println(bestName)
}
