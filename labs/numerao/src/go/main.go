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
	sum := 0
	sign := 1
	for i := len(text) - 1; i >= 0; i-- {
		sum += sign * int(text[i]-'0')
		sign = -sign
	}
	if sum%11 == 0 {
		fmt.Println("sim")
	} else {
		fmt.Println("nao")
	}
}
