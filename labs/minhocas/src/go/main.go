package main

import "fmt"

func main() {
	var rows, columns int
	fmt.Scan(&rows, &columns)
	matrix := make([][]int, rows)
	rowSums := make([]int, rows)
	columnSums := make([]int, columns)
	for row := range matrix {
		matrix[row] = make([]int, columns)
		for column := range matrix[row] {
			fmt.Scan(&matrix[row][column])
			rowSums[row] += matrix[row][column]
			columnSums[column] += matrix[row][column]
		}
	}
	maximum := 0
	for _, total := range rowSums {
		if total > maximum {
			maximum = total
		}
	}
	for _, total := range columnSums {
		if total > maximum {
			maximum = total
		}
	}
	fmt.Println(maximum)
}
