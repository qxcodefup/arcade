package main

import "fmt"

func main() {
	var capacity, b, g, m int
	fmt.Scan(&capacity, &b, &g, &m)
	total := b + g + m
	fmt.Println((total + capacity - 1) / capacity)
}
