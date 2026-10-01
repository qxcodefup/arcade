package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	perfect := false
	for i := 1; i*i <= n; i++ {
		if i*i == n {
			perfect = true
			break
		}
	}
	if perfect {
		fmt.Println("sim")
	} else {
		fmt.Println("nao")
	}
}
