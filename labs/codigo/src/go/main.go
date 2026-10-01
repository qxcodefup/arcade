package main

import "fmt"

func main() {
	var count int
	fmt.Scan(&count)
	sequence := make([]int, count)
	for i := range sequence {
		fmt.Scan(&sequence[i])
	}
	patterns := 0
	for i := 0; i+2 < len(sequence); i++ {
		if sequence[i] == 1 && sequence[i+1] == 0 && sequence[i+2] == 0 {
			patterns++
		}
	}
	fmt.Println(patterns)
}
