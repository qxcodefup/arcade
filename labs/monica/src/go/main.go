package main

import "fmt"

func main() {
	var m, a, b int
	fmt.Scan(&m, &a, &b)
	c := m - a - b
	if a > b {
		if a > c {
			fmt.Println(a)
		} else {
			fmt.Println(c)
		}
	} else if b > c {
		fmt.Println(b)
	} else {
		fmt.Println(c)
	}
}
