package main

import "fmt"

func main() {
	var size int
	fmt.Scan(&size)
	matrix := make([][]int64, size)
	rowSums := make([]int64, size)
	columnSums := make([]int64, size)
	for row := range matrix {
		matrix[row] = make([]int64, size)
		for column := range matrix[row] {
			fmt.Scan(&matrix[row][column])
			rowSums[row] += matrix[row][column]
			columnSums[column] += matrix[row][column]
		}
	}
	maximum := int64(0)
	for row := range matrix {
		for column := range matrix[row] {
			weight := rowSums[row] + columnSums[column] - 2*matrix[row][column]
			if weight > maximum {
				maximum = weight
			}
		}
	}
	fmt.Println(maximum)
}
