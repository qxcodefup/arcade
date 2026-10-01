package main

import "fmt"

func main() {
	var n, previous, current int
	fmt.Scan(&n)
	if n == 0 {
		fmt.Println("ok")
		return
	}
	fmt.Scan(&previous)
	ordered := true
	for i := 1; i < n; i++ {
		fmt.Scan(&current)
		if current < previous {
			ordered = false
		}
		previous = current
	}
	if ordered {
		fmt.Println("ok")
	} else {
		fmt.Println("precisa de ajuste")
	}
}
