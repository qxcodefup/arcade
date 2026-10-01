package main

import "fmt"

func main() {
	var h1, m1, s1, h2, m2, s2 int
	fmt.Scan(&h1, &m1, &s1, &h2, &m2, &s2)
	start := h1*3600 + m1*60 + s1
	end := h2*3600 + m2*60 + s2
	if end < start {
		end += 24 * 3600
	}
	diff := end - start
	fmt.Printf("%02d %02d %02d\n", diff/3600, diff/60%60, diff%60)
}
