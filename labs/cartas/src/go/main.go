package main

import "fmt"

func main() {
	var n, value int
	fmt.Scan(&n)
	fmt.Print("[")
	for i := 0; i < n; i++ {
		fmt.Scan(&value)
		if i > 0 {
			fmt.Print(", ")
		}
		switch value {
		case 1:
			fmt.Print("A")
		case 11:
			fmt.Print("J")
		case 12:
			fmt.Print("Q")
		case 13:
			fmt.Print("K")
		default:
			fmt.Print(value)
		}
	}
	fmt.Println("]")
}
