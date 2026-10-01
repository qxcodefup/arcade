package main

import "fmt"

func main() {
	var n, a, b int
	fmt.Scan(&n)
	winner := -1
	best := int(^uint(0) >> 1)
	for i := 0; i < n; i++ {
		fmt.Scan(&a, &b)
		difference := a - b
		if difference < 0 {
			difference = -difference
		}
		if a >= 10 && b >= 10 && difference < best {
			best = difference
			winner = i
		}
	}
	if winner < 0 {
		fmt.Println("sem ganhador")
	} else {
		fmt.Println(winner)
	}
}
