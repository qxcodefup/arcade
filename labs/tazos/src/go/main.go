package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	values := make([]int, n)
	counts := map[int]int{}
	max := 0
	for i := range values {
		fmt.Scan(&values[i])
		counts[values[i]]++
		if counts[values[i]] > max {
			max = counts[values[i]]
		}
	}
	sortInts(values)
	fmt.Print("[ ")
	previous, first := 0, true
	for _, v := range values {
		if counts[v] == max && (first || v != previous) {
			fmt.Print(v, " ")
			previous = v
			first = false
		}
	}
	fmt.Println("]")
}
func sortInts(a []int) {
	for i := 1; i < len(a); i++ {
		value := a[i]
		j := i - 1
		for j >= 0 && a[j] > value {
			a[j+1] = a[j]
			j--
		}
		a[j+1] = value
	}
}
