package main

import "fmt"

func escapes(depth, slip, initial int) bool {
	position := 0
	jump := initial
	for {
		position += jump
		jump -= 10
		if jump < 0 {
			jump = 0
		}
		if position >= depth {
			return true
		}
		position -= slip
		if position < 0 {
			return false
		}
	}
}
func main() {
	var depth, slip int
	fmt.Scan(&depth, &slip)
	jump := 1
	for !escapes(depth, slip, jump) {
		jump++
	}
	fmt.Println(jump)
}
