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
	if len(a) != len(b) {
		fmt.Println("nao")
		return
	}
	count := [26]int{}
	for i := 0; i < len(a); i++ {
		count[a[i]-'a']++
		count[b[i]-'a']--
	}
	for _, n := range count {
		if n != 0 {
			fmt.Println("nao")
			return
		}
	}
	fmt.Println("sim")
}
