package main

import "fmt"

func main() {
	matrix := make([][]int, 5)
	for row := range matrix {
		matrix[row] = make([]int, 5)
		for column := range matrix[row] {
			fmt.Scan(&matrix[row][column])
		}
	}
	mainDiagonal, secondaryDiagonal := 0, 0
	for i := 0; i < 5; i++ {
		mainDiagonal += matrix[i][i]
		secondaryDiagonal += matrix[i][4-i]
	}
	fmt.Println(mainDiagonal - secondaryDiagonal)
}
