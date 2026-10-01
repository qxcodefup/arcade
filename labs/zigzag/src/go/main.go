package main

import "fmt"

func main() {
	var start, end int
	fmt.Scan(&start, &end)
	for value := start; value <= end; value++ {
		if value%15 == 0 {
			fmt.Println("zigzag")
		} else if value%3 == 0 {
			fmt.Println("zig")
		} else if value%5 == 0 {
			fmt.Println("zag")
		} else {
			fmt.Println(value)
		}
	}
}
