package main

import "fmt"

func main() {
	var dividend, divisor int
	fmt.Scan(&dividend, &divisor)
	fmt.Println(dividend / divisor)
	fmt.Println(dividend % divisor)
	fmt.Printf("%.2f\n", float64(dividend)/float64(divisor))
}
