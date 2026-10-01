package main

import "fmt"

func main() {
	var missing int
	fmt.Scan(&missing)
	fmt.Print("[ ")
	for value := 0; value < 10; value++ {
		if value != missing {
			fmt.Print(value, " ")
		}
	}
	if missing != 10 {
		fmt.Print("ceu ")
	}
	fmt.Println("]")
}
