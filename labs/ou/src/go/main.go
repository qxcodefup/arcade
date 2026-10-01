package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	if n == 3 || n == 5 {
		fmt.Println("SIM")
	} else {
		fmt.Println("NAO")
	}
}
