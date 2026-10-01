package main

import "fmt"

func main() {
	var count int
	fmt.Scan(&count)
	unmatched := make(map[int]int)
	pairs := 0
	for i := 0; i < count; i++ {
		var animal int
		fmt.Scan(&animal)
		partner := -animal
		if unmatched[partner] > 0 {
			unmatched[partner]--
			pairs++
		} else {
			unmatched[animal]++
		}
	}
	fmt.Println(pairs)
}
