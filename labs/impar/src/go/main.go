package main

import "fmt"

func main() {
	var p, a, b int
	fmt.Scan(&p, &a, &b)
	if (a+b)%2 == 0 {
		fmt.Println(p)
	} else {
		fmt.Println(1 - p)
	}
}
