package main

import "fmt"

func main() {
	var first, second float64
	fmt.Scan(&first, &second)
	fmt.Printf("%.1f\n", (first+second)/2)
}
