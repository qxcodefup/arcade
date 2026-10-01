package main

import "fmt"

func main() {
	var totalSeconds int
	fmt.Scan(&totalSeconds)
	hours := totalSeconds / 3600
	minutes := totalSeconds % 3600 / 60
	seconds := totalSeconds % 60
	fmt.Printf("%d:%d:%d\n", hours, minutes, seconds)
}
