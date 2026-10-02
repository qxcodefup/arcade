package main

import (
	"fmt"
	"strconv"
)

func main() {
	var h1Text, m1Text, s1Text, h2Text, m2Text, s2Text string
	fmt.Scan(&h1Text, &m1Text, &s1Text, &h2Text, &m2Text, &s2Text)
	h1, _ := strconv.Atoi(h1Text)
	m1, _ := strconv.Atoi(m1Text)
	s1, _ := strconv.Atoi(s1Text)
	h2, _ := strconv.Atoi(h2Text)
	m2, _ := strconv.Atoi(m2Text)
	s2, _ := strconv.Atoi(s2Text)
	start := h1*3600 + m1*60 + s1
	end := h2*3600 + m2*60 + s2
	if end < start {
		end += 24 * 3600
	}
	diff := end - start
	fmt.Printf("%02d %02d %02d\n", diff/3600, diff/60%60, diff%60)
}
