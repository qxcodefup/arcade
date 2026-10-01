package main

import "fmt"

func main() {
	var a, b, c int
	fmt.Scan(&a, &b, &c)
	if a != b && a != c {
		fmt.Println("jog1")
	} else if b != a && b != c {
		fmt.Println("jog2")
	} else if c != a && c != b {
		fmt.Println("jog3")
	} else {
		fmt.Println("empate")
	}
}
