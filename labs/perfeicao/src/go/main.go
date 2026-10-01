package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	s := bufio.NewScanner(os.Stdin)
	s.Scan()
	name := s.Text()
	sum := 0
	for _, c := range name {
		sum += int(c)
	}
	for c := 'a'; c <= 'z'; c++ {
		if (sum+int(c))%50 == 0 {
			fmt.Println(name + string(c))
			return
		}
	}
	fmt.Println("sem sorte")
}
