package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	prime := n > 1
	for d := 2; d*d <= n && prime; d++ {
		if n%d == 0 {
			prime = false
		}
	}
	if prime {
		fmt.Println(1)
	} else {
		fmt.Println(0)
	}
}
