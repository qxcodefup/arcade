package main

import "fmt"

func main() {
	var rows, cols int
	fmt.Scan(&rows, &cols)

	mat := make([][]int, rows)
	for i := 0; i < rows; i++ {
		mat[i] = make([]int, cols)
		for j := 0; j < cols; j++ {
			fmt.Scan(&mat[i][j])
		}
	}

	var x int
	fmt.Scan(&x)

	count := 0
	for i := 0; i < rows; i++ {
		for j := 0; j < cols; j++ {
			if mat[i][j] == x {
				count++
			}
		}
	}

	fmt.Println(count)
}
