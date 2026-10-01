package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	in := bufio.NewScanner(os.Stdin)
	in.Scan()
	n := 0
	fmt.Sscan(in.Text(), &n)
	for i := 0; i < n; i++ {
		in.Scan()
		s := in.Text()
		best := ""
		cur := ""
		for _, c := range s {
			if c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' {
				cur += string(c)
				if len(cur) > len(best) {
					best = cur
				}
			} else {
				cur = ""
			}
		}
		fmt.Println(best)
	}
}
