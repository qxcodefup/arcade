package main

import "fmt"

func main() {
	var a, b string
	fmt.Scan(&a, &b)
	if a == b {
		fmt.Println("empate")
	} else if (a == "R" && b == "S") || (a == "S" && b == "P") || (a == "P" && b == "R") {
		fmt.Println("jog1")
	} else {
		fmt.Println("jog2")
	}
}
