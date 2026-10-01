package main

import "fmt"

func main() {
	var size, x, y, distance int
	var direction string
	fmt.Scan(&size, &x, &y, &direction, &distance)
	switch direction {
	case "R":
		x += distance
	case "L":
		x -= distance
	case "U":
		y -= distance
	case "D":
		y += distance
	}
	x = (x%size + size) % size
	y = (y%size + size) % size
	fmt.Println(x, y)
}
