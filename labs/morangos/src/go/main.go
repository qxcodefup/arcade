package main

import "fmt"

func main() {
	var l1, w1, l2, w2 int
	fmt.Scan(&l1, &w1, &l2, &w2)
	a := l1 * w1
	b := l2 * w2
	if a > b {
		fmt.Println(a)
	} else {
		fmt.Println(b)
	}
}
