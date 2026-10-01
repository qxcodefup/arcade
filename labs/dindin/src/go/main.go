package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	flavor := map[string]int{}
	shift := map[string]int{}
	var f, s string
	for i := 0; i < n; i++ {
		fmt.Scan(&f, &s)
		flavor[f]++
		shift[s]++
	}
	fmt.Println(winner(flavor, "c", "l"))
	fmt.Println(lessUsed(shift, "m", "t"))
}
func lessUsed(counts map[string]int, a, b string) string {
	if counts[a] < counts[b] {
		return a
	}
	if counts[b] < counts[a] {
		return b
	}
	return "empate"
}
func winner(counts map[string]int, a, b string) string {
	if counts[a] > counts[b] {
		return a
	}
	if counts[b] > counts[a] {
		return b
	}
	return "empate"
}
