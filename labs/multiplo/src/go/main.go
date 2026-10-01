package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	if n%7 == 0 {
		fmt.Println("SIM")
	} else {
		fmt.Println("NAO")
	}
}
