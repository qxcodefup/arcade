package main

import "fmt"

func main() {
	var rows, columns int
	fmt.Scan(&rows, &columns)
	matrix := make([][]int, rows)
	for row := range matrix {
		matrix[row] = make([]int, columns)
		for column := range matrix[row] {
			fmt.Scan(&matrix[row][column])
		}
	}
	count := 0
	for row := 1; row < rows; row++ {
		for column := 0; column < columns; column++ {
			if matrix[row-1][column] > matrix[row][column] {
				count++
			}
		}
	}
	fmt.Println(count)
}
