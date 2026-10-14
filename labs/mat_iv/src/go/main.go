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

	for i := 0; i < rows; i++ {
		fmt.Print("[ ")
		for j := 0; j < cols; j++ {
			fmt.Print(mat[i][j], " ")
		}
		fmt.Println("]")
	}
}
