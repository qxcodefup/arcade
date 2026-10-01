package main

import "fmt"

func main() {
	var limit, n int
	fmt.Scan(&limit, &n)
	throws := make([]int, n)
	for i := range throws {
		fmt.Scan(&throws[i])
	}
	winner := -1
	farthestIndex := 0
	maxDistance := -1
	for i, value := range throws {
		distance := abs(value)
		if distance <= limit && (winner < 0 || distance <= abs(throws[winner])) {
			winner = i
		}
		if distance >= maxDistance {
			maxDistance = distance
			farthestIndex = i
		}
	}
	if winner < 0 {
		fmt.Println("nenhum")
	} else {
		fmt.Println(winner)
	}
	fmt.Println(farthestIndex)
}
func abs(n int) int {
	if n < 0 {
		return -n
	}
	return n
}
