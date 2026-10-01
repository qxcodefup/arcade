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
	target := 0
	for column := 0; column < 3; column++ {
		target += matrix[0][column]
	}
	valid := true
	for row := 0; row < 3; row++ {
		sum := 0
		for column := 0; column < 3; column++ {
			sum += matrix[row][column]
		}
		if sum != target {
			valid = false
		}
	}
	for column := 0; column < 3; column++ {
		sum := 0
		for row := 0; row < 3; row++ {
			sum += matrix[row][column]
		}
		if sum != target {
			valid = false
		}
	}
	mainDiagonal, secondaryDiagonal := 0, 0
	for i := 0; i < 3; i++ {
		mainDiagonal += matrix[i][i]
		secondaryDiagonal += matrix[i][2-i]
	}
	if mainDiagonal != target || secondaryDiagonal != target {
		valid = false
	}
	if valid {
		fmt.Println("sim")
	} else {
		fmt.Println("nao")
	}
}
