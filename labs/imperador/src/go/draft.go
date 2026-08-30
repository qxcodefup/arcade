package main

import "fmt"

func zeroLineColumn(mat [][]string, line int, column int) {
	for c := 0; c < len(mat[line]); c++ {
		mat[line][c] = ""
	}
	for l := 0; l < len(mat); l++ {
		mat[l][column] = ""
	}
}

func processSecondaryDiagonal(mat [][]string) {
	size := len(mat)
	for i := 0; i < size; i++ {
		if mat[i][size-i-1] == "C" {
			mat[i][size-i-1] = "V"
		}
	}
}

func sumPrisionersGladiators(mat [][]string) (int, int) {
	prisioners := 0
	gradiators := 0
	for _, line := range mat {
		for _, val := range line {
			switch val {
			case "C":
				prisioners += 1
			case "G":
				gradiators += 2
			case "V":
				prisioners += 2
			}
		}
	}
	return prisioners, gradiators
}

func find(mat [][]string, target string) (int, int) {
	for i, line := range mat {
		for j, val := range line {
			if val == target {
				return i, j
			}
		}
	}
	return -1, -1 // Not found
}

func main() {
	size := 0
	fmt.Scan(&size)
	// Create a 2D slice (matrix) of the given size
	mat := make([][]string, size)
	for i := range mat {
		mat[i] = make([]string, size)
	}
	// Fill the matrix with user input
	for i := 0; i < size; i++ {
		for j := 0; j < size; j++ {
			fmt.Scan(&mat[i][j])
		}
	}
	lr, lc := find(mat, "L")
	if lr != -1 && lc != -1 {
		zeroLineColumn(mat, lr, lc)
	}
	processSecondaryDiagonal(mat)
	prisioners, gradiators := sumPrisionersGladiators(mat)
	// Print the matrix
	if prisioners > gradiators {
		fmt.Println("Condenados a morte")
	} else if gradiators > prisioners {
		fmt.Println("Gladiadores")
	} else {
		fmt.Println("Ninguem")
	}

}
