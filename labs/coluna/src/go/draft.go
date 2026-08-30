package main

import "fmt"

func indexBest(arr []int) int {
	best := 0
	for i := 1; i < len(arr); i++ {
		if arr[i] > arr[best] {
			best = i
		}
	}
	return best
}

func main() {
	size := 0
	fmt.Scan(&size)
	grid := make([][]int, size)
	for i := 0; i < size; i++ {
		grid[i] = make([]int, size)
	}
	for i := range size {
		for j := range size {
			fmt.Scan(&grid[i][j])
		}
	}

	sums := make([]int, 0, size)
	for c := range size {
		sum := 0
		for r := range size {
			sum += grid[r][c] * grid[r][c]
		}
		sums = append(sums, sum)
	}

	col := indexBest(sums)
	fmt.Printf("%d\n", col)
}
