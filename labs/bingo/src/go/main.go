package main

import "fmt"

func main() {
	card := [][]int{
		{1, 9, 27, 23},
		{34, 20, 37, 47},
		{30, 87, 55, 69},
		{13, 60, 99, 66},
	}
	var draws [6]int
	for i := range draws {
		fmt.Scan(&draws[i])
	}
	count := 0
	for _, draw := range draws {
		found := false
		for _, row := range card {
			for _, number := range row {
				if draw == number {
					found = true
					break
				}
			}
			if found {
				break
			}
		}
		if found {
			count++
		}
	}
	fmt.Println(count)
}
