package main

import "fmt"

func main() {
	var cases int
	fmt.Scan(&cases)
	leds := []int{6, 2, 5, 5, 4, 5, 6, 3, 7, 6}
	for i := 0; i < cases; i++ {
		var value string
		fmt.Scan(&value)
		total := 0
		for _, digit := range value {
			total += leds[digit-'0']
		}
		fmt.Println(total, "leds")
	}
}
