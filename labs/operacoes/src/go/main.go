package main

import "fmt"

func main() {
	var first, second int
	fmt.Scan(&first, &second)
	fmt.Println(first + second)
	fmt.Println(first - second)
	fmt.Println(first * second)
	fmt.Printf("%.2f\n", float64(first)/float64(second))
	fmt.Println(first % second)
}
