package main

import "fmt"

func main() {
	var rows, columns int
	fmt.Scan(&rows, &columns)
	sum := make([][]int, rows)
	for row := range sum {
		sum[row] = make([]int, columns)
		for column := range sum[row] {
			fmt.Scan(&sum[row][column])
		}
	}
	for row := 0; row < rows; row++ {
		for column := 0; column < columns; column++ {
			var value int
			fmt.Scan(&value)
			sum[row][column] += value
		}
	}
	for _, line := range sum {
		fmt.Print("[ ")
		for column, value := range line {
			if column > 0 {
				fmt.Print(" ")
			}
			fmt.Print(value)
		}
		fmt.Println(" ]")
	}
}
