package main

import "fmt"

func main() {
	var a, b int
	var op string
	fmt.Scan(&a, &b, &op)
	switch op {
	case "+":
		fmt.Println(a + b)
	case "-":
		fmt.Println(a - b)
	case "*":
		fmt.Println(a * b)
	case "/":
		if b == 0 {
			fmt.Println("invalida")
		} else {
			fmt.Println(a / b)
		}
	}
}
