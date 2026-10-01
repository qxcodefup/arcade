package main

import "fmt"

func main() {
	var n, card, score, aces int
	fmt.Scan(&n)
	for i := 0; i < n; i++ {
		fmt.Scan(&card)
		if card == 1 {
			score += 11
			aces++
		} else if card > 10 {
			score += 10
		} else {
			score += card
		}
	}
	for score > 21 && aces > 0 {
		score -= 10
		aces--
	}
	fmt.Println(score)
}
