package main

import "fmt"

func main() {
	var rows, columns int
	fmt.Scan(&rows, &columns)
	grid := make([]string, rows)
	for row := range grid {
		fmt.Scan(&grid[row])
	}
	next := make([][]rune, rows)
	for row := range next {
		next[row] = make([]rune, columns)
		for column := 0; column < columns; column++ {
			neighbors := 0
			for rowOffset := -1; rowOffset <= 1; rowOffset++ {
				for columnOffset := -1; columnOffset <= 1; columnOffset++ {
					if rowOffset == 0 && columnOffset == 0 {
						continue
					}
					neighborRow := row + rowOffset
					neighborColumn := column + columnOffset
					if neighborRow >= 0 && neighborRow < rows && neighborColumn >= 0 && neighborColumn < columns && grid[neighborRow][neighborColumn] == '#' {
						neighbors++
					}
				}
			}
			if grid[row][column] == '#' {
				next[row][column] = '#'
				if neighbors < 2 || neighbors > 3 {
					next[row][column] = '.'
				}
			} else if neighbors == 3 {
				next[row][column] = '#'
			} else {
				next[row][column] = '.'
			}
		}
	}
	for _, line := range next {
		fmt.Println(string(line))
	}
}
