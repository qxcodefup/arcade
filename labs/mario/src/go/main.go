package main

import "fmt"

func main() {
	var count int
	fmt.Scan(&count)
	heights := make([]int, count)
	maximum := 0
	for i := range heights {
		fmt.Scan(&heights[i])
		if heights[i] > maximum {
			maximum = heights[i]
		}
	}
	for level := maximum; level > 0; level-- {
		for _, height := range heights {
			if height >= level {
				fmt.Print("#")
			} else {
				fmt.Print("_")
			}
		}
		fmt.Println()
	}
}
