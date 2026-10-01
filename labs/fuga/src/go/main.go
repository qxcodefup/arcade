package main

import "fmt"

func main() {
	var h, p, f, d int
	fmt.Scan(&h, &p, &f, &d)
	for f != h && f != p {
		f = (f + d + 16) % 16
	}
	if f == h {
		fmt.Println("S")
	} else {
		fmt.Println("N")
	}
}
