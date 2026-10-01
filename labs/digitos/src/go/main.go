package main

import "fmt"

func main() {
	var digit, n int
	fmt.Scan(&digit, &n)
	count := 0
	for {
		if n%10 == digit {
			count++
		}
		n /= 10
		if n == 0 {
			break
		}
	}
	fmt.Println(count)
}
