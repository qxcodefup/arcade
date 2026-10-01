package main

import (
	"fmt"
	"strconv"
)

func main() {
	var n int
	fmt.Scan(&n)
	values := make([]float64, n)
	for i := range values {
		fmt.Scan(&values[i])
	}
	sortFloats(values)
	median := values[n/2]
	if n%2 == 0 {
		median = (values[n/2-1] + values[n/2]) / 2
	}
	fmt.Println(strconv.FormatFloat(median, 'f', 1, 64))
}
func sortFloats(values []float64) {
	for i := 1; i < len(values); i++ {
		value := values[i]
		j := i - 1
		for j >= 0 && values[j] > value {
			values[j+1] = values[j]
			j--
		}
		values[j+1] = value
	}
}
