package main

import "fmt"

func main() {
	var a, b int
	fmt.Scan(&a, &b)
	if a > b {
		fmt.Println("invalido")
		return
	}
	sum := 0
	for i := a; i <= b; i++ {
		if i%2 == 0 {
			sum += i
		}
	}
	fmt.Println(sum)
}
