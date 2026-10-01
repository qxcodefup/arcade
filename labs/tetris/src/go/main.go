package main

import "fmt"

func main() {
	var rows, columns int
	fmt.Scan(&rows, &columns)
	grid := make([][]rune, rows)
	for row := range grid {
		var line string
		fmt.Scan(&line)
		grid[row] = []rune(line)
	}
	canFall := true
	for row := 0; row < rows; row++ {
		for column := 0; column < columns; column++ {
			if grid[row][column] != 'o' {
				continue
			}
			if row+1 == rows || (grid[row+1][column] != '.' && grid[row+1][column] != 'o') {
				canFall = false
			}
		}
	}
	if canFall {
		for row := rows - 1; row >= 0; row-- {
			for column := 0; column < columns; column++ {
				if grid[row][column] == 'o' {
					grid[row][column] = '.'
					grid[row+1][column] = 'o'
				}
			}
		}
	}
	for _, line := range grid {
		fmt.Println(string(line))
	}
}
