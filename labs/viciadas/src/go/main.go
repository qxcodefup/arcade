package main

import "fmt"

func main() {
	var n, value int
	fmt.Scan(&n)
	counts := map[int]int{}
	max := 0
	for i := 0; i < n; i++ {
		fmt.Scan(&value)
		counts[value]++
		if counts[value] > max {
			max = counts[value]
		}
	}
	values := make([]int, 0, len(counts))
	for value := range counts {
		if counts[value] == max {
			values = append(values, value)
		}
	}
	sortInts(values)
	fmt.Println(len(counts))
	for i, value := range values {
		if i > 0 {
			fmt.Print(" ")
		}
		fmt.Print(value)
	}
	fmt.Println()
}
func sortInts(values []int) {
	for i := 1; i < len(values); i++ {
		value := values[i]
		j := i - 1
		for j >= 0 && values[j] > value {
			values[j+1] = values[j]
			j--
		}
		values[j+1] = value
	}
}
