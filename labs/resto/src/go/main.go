package main

import "fmt"

func main() {
	var dividend, divisor int
	fmt.Scan(&dividend, &divisor)
	fmt.Println(dividend/divisor, dividend%divisor)
}
