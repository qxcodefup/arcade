package main

import "fmt"

func score(cards [5]int) int {
	counts := [14]int{}
	for _, c := range cards {
		counts[c]++
	}
	straight := false
	start := 0
	for x := 1; x <= 9; x++ {
		ok := true
		for j := 0; j < 5; j++ {
			if counts[x+j] == 0 {
				ok = false
			}
		}
		if ok {
			straight = true
			start = x
		}
	}
	if straight {
		return start + 200
	}
	four, three, pair1, pair2 := 0, 0, 0, 0
	for x := 1; x <= 13; x++ {
		switch counts[x] {
		case 4:
			four = x
		case 3:
			three = x
		case 2:
			if pair1 == 0 {
				pair1 = x
			} else {
				pair2 = x
			}
		}
	}
	if four > 0 {
		return four + 180
	}
	if three > 0 && pair1 > 0 {
		return three + 160
	}
	if three > 0 {
		return three + 140
	}
	if pair1 > 0 && pair2 > 0 {
		x, y := pair1, pair2
		if y > x {
			x, y = y, x
		}
		return 3*x + 2*y + 20
	}
	if pair1 > 0 {
		return pair1
	}
	return 0
}
func main() {
	var n int
	fmt.Scan(&n)
	for i := 1; i <= n; i++ {
		var c [5]int
		for j := range c {
			fmt.Scan(&c[j])
		}
		fmt.Print("Teste ", i, "\n", score(c), "\n\n")
	}
}
