package main

import "fmt"

func main() {
	var a, b, c, h, l int
	fmt.Scan(&a, &b, &c, &h, &l)
	fits := func(x, y int) bool { return (x <= h && y <= l) || (x <= l && y <= h) }
	if fits(a, b) || fits(a, c) || fits(b, c) {
		fmt.Println("S")
	} else {
		fmt.Println("N")
	}
}
