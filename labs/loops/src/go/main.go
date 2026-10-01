package main

import "fmt"

func main() {
	var angle int
	fmt.Scan(&angle)
	angle %= 360
	if angle < 0 {
		angle += 360
	}
	fmt.Println(angle)
}
