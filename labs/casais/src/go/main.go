package main

import "fmt"

func main() {
	var n, value int
	fmt.Scan(&n)
	males := map[int]int{}
	females := map[int]int{}
	for i := 0; i < n; i++ {
		fmt.Scan(&value)
		if value > 0 {
			males[value]++
		} else if value < 0 {
			females[-value]++
		}
	}
	pairs := 0
	for species, count := range males {
		if females[species] < count {
			pairs += females[species]
		} else {
			pairs += count
		}
	}
	fmt.Println(pairs)
}
