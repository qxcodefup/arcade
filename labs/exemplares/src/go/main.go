package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	values := make([]int, n)
	for i := range values {
		fmt.Scan(&values[i])
	}
	sortInts(values)
	first := true
	for _, v := range values {
		if !first && v == previous {
			continue
		}
		if !first {
			fmt.Print(" ")
		}
		fmt.Print(v)
		previous = v
		first = false
	}
	fmt.Println()
}

var previous int

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
