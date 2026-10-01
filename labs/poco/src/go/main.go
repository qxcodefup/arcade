package main

import "fmt"

func main() {
	var depth, jump, slip int
	fmt.Scan(&depth, &jump, &slip)
	position := 0
	for {
		fmt.Print(position, " ")
		position += jump
		jump -= 10
		if jump < 0 {
			jump = 0
		}
		if position >= depth {
			fmt.Println("saiu")
			return
		}
		fmt.Println(position)
		position -= slip
		if position < 0 {
			fmt.Println(position, "morreu")
			return
		}
	}
}
