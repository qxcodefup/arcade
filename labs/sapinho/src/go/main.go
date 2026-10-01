package main

import "fmt"

func main() {
	var depth, jump, slip int
	fmt.Scan(&depth, &jump, &slip)
	position := 0
	for {
		fmt.Print(position)
		position += jump
		if position >= depth {
			fmt.Println(" saiu")
			return
		}
		fmt.Print(" ")
		fmt.Println(position)
		position -= slip
	}
}
