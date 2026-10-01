package main

import "fmt"

func main() {
	var rows, columns int
	fmt.Scan(&rows, &columns)
	field := make([]string, rows)
	for row := range field {
		fmt.Scan(&field[row])
	}
	result := make([][]rune, rows)
	for row := range result {
		result[row] = make([]rune, columns)
		for column := 0; column < columns; column++ {
			if field[row][column] == '*' {
				result[row][column] = '*'
				continue
			}
			mines := 0
			for rowOffset := -1; rowOffset <= 1; rowOffset++ {
				for columnOffset := -1; columnOffset <= 1; columnOffset++ {
					neighborRow := row + rowOffset
					neighborColumn := column + columnOffset
					if neighborRow >= 0 && neighborRow < rows && neighborColumn >= 0 && neighborColumn < columns && field[neighborRow][neighborColumn] == '*' {
						mines++
					}
				}
			}
			if mines == 0 {
				result[row][column] = '-'
			} else {
				result[row][column] = rune('0' + mines)
			}
		}
	}
	for _, line := range result {
		fmt.Println(string(line))
	}
}
