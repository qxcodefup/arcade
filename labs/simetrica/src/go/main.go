package main

import "fmt"

func main() {
	matrix := make([][]int, 3)
	for row := range matrix {
		matrix[row] = make([]int, 3)
		for column := range matrix[row] {
			fmt.Scan(&matrix[row][column])
		}
	}
	symmetric := true
	for row := 0; row < 3; row++ {
		for column := row + 1; column < 3; column++ {
			if matrix[row][column] != matrix[column][row] {
				symmetric = false
			}
		}
	}
	if symmetric {
		fmt.Println("sim")
	} else {
		fmt.Println("nao")
	}
}
