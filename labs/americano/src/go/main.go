package main

import "fmt"

func main() {
	var a, b, c, d int
	fmt.Scan(&a, &b, &c, &d)
	sum := a + b + c + d
	if sum == 0 {
		fmt.Println("nenhum")
	} else {
		fmt.Printf("jog%d\n", (sum-1)%4+1)
	}
}
