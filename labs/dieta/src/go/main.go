package main

import (
	"fmt"
	"strconv"
)

func main() {
	var n, value, sum int
	fmt.Scan(&n)
	for i := 0; i < n; i++ {
		fmt.Scan(&value)
		sum += value
	}
	fmt.Println(strconv.FormatFloat(float64(sum)/float64(n), 'f', 1, 64))
}
