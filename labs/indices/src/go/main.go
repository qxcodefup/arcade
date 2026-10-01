package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	values := make([]int, n)
	indices := make([]int, n)
	for i := range values {
		fmt.Scan(&values[i])
		indices[i] = i
	}
	for i := 1; i < n; i++ {
		index := indices[i]
		j := i - 1
		for j >= 0 && values[indices[j]] > values[index] {
			indices[j+1] = indices[j]
			j--
		}
		indices[j+1] = index
	}
	fmt.Print("[ ")
	for _, index := range indices {
		fmt.Print(index, " ")
	}
	fmt.Println("]")
}
