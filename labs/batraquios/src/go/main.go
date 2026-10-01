package main

import "fmt"

func main() {
	var n, m, value int
	fmt.Scan(&n)
	first := make([]int, n)
	for i := range first {
		fmt.Scan(&first[i])
	}
	fmt.Scan(&m)
	contains := map[int]bool{}
	for i := 0; i < m; i++ {
		fmt.Scan(&value)
		contains[value] = true
	}
	for _, v := range first {
		if !contains[v] {
			fmt.Println("nao")
			return
		}
	}
	fmt.Println("sim")
}
