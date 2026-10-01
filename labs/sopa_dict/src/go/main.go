package main

import "fmt"

func fib(n int, cache map[int]int64) int64 {
	if n <= 1 {
		return int64(n)
	}
	if valor, existe := cache[n]; existe {
		return valor
	}
	valor := fib(n-1, cache) + fib(n-2, cache)
	cache[n] = valor
	return valor
}

func main() {
	var n int
	fmt.Scan(&n)
	fmt.Println(fib(n, map[int]int64{}))
}
