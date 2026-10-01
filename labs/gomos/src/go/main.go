package main

import "fmt"

type Ponto struct {
	x int
	y int
}

func main() {
	var count int
	var direction string
	fmt.Scan(&count, &direction)
	segments := make([]Ponto, count)
	for i := range segments {
		fmt.Scan(&segments[i].x, &segments[i].y)
	}
	previous := append([]Ponto(nil), segments...)
	switch direction {
	case "L":
		segments[0].x--
	case "R":
		segments[0].x++
	case "U":
		segments[0].y--
	case "D":
		segments[0].y++
	}
	for i := 1; i < count; i++ {
		segments[i] = previous[i-1]
	}
	for _, segment := range segments {
		fmt.Println(segment.x, segment.y)
	}
}
