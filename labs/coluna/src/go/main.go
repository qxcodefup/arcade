package main

import "fmt"

func main() {
	var size int
	fmt.Scan(&size)
	matrix := make([][]int64, size)
	for row := range matrix {
		matrix[row] = make([]int64, size)
		for column := range matrix[row] {
			fmt.Scan(&matrix[row][column])
		}
	}
	bestColumn, bestValue := 0, int64(-1)
	for column := 0; column < size; column++ {
		value := int64(0)
		for row := 0; row < size; row++ {
			cell := matrix[row][column]
			value += cell * cell
		}
		if column == 0 || value > bestValue {
			bestColumn, bestValue = column, value
		}
	}
	fmt.Println(bestColumn)
}
