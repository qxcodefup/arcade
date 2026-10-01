package main

import "fmt"

func main() {
	matrix := make([][]int, 2)
	sum := 0
	for row := range matrix {
		matrix[row] = make([]int, 3)
		for column := range matrix[row] {
			fmt.Scan(&matrix[row][column])
			sum += matrix[row][column]
		}
	}
	fmt.Println(sum)
}
