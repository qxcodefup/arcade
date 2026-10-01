package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	for factor := 2; factor*factor <= n; factor++ {
		count := 0
		for n%factor == 0 {
			n /= factor
			count++
		}
		if count > 0 {
			fmt.Println(factor, count)
		}
	}
	if n > 1 {
		fmt.Println(n, 1)
	}
}
