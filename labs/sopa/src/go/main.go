package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	a, b := uint64(1), uint64(1)
	if n > 2 {
		for i := 3; i <= n; i++ {
			a, b = b, a+b
		}
	}
	fmt.Println(b)
}
