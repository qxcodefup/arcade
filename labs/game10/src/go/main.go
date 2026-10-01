package main

import "fmt"

func main() {
	var n, d, a int
	fmt.Scan(&n, &d, &a)
	if a > d {
		d += n
	}
	fmt.Println(d - a)
}
