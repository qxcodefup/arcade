package main

import "fmt"

func main() {
	var rows, cols int
	fmt.Scan(&rows, &cols)

	for i := 0; i < rows; i++ {
		fmt.Print("[ ")
		for j := 0; j < cols; j++ {
			val := (i + j) % 2
			fmt.Print(val, " ")
		}
		fmt.Println("]")
	}
}
