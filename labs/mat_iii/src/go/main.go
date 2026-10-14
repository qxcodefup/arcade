package main

import "fmt"

func main() {
	var rows, cols int
	fmt.Scan(&rows, &cols)

	count := 1
	for i := 0; i < rows; i++ {
		fmt.Print("[ ")
		for j := 0; j < cols; j++ {
			fmt.Print(count, " ")
			count++
		}
		fmt.Println("]")
	}
}
