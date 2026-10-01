package main

import "fmt"

func main() {
	var n, moves int
	fmt.Scan(&n, &moves)
	bar := make([]int, n)
	for i := range bar {
		fmt.Scan(&bar[i])
	}
	counts := make([]int, 10)
	position := 1
	counts[bar[position-1]]++
	var firstPosition int
	fmt.Scan(&firstPosition)
	for move := 1; move < moves; move++ {
		var target int
		fmt.Scan(&target)
		step := 1
		if target < position {
			step = -1
		}
		for position != target {
			position += step
			counts[bar[position-1]]++
		}
	}
	fmt.Print("[ ")
	for _, count := range counts {
		fmt.Print(count, " ")
	}
	fmt.Println("]")
}
