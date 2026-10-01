package main

import "fmt"

func main() {
	var speed, minutes, fuel float64
	fmt.Scan(&speed, &minutes, &fuel)
	distance := speed * minutes / 60
	fmt.Printf("%.2f\n", distance/fuel)
}
