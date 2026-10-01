package main

import "fmt"

func main() {
	var hour, minute, distance int
	var direction string
	fmt.Scan(&hour, &minute, &direction, &distance)
	pos := hour*6 + minute/10
	if direction == "H" {
		pos += distance
	} else {
		pos -= distance
	}
	pos = (pos%(12*6) + (12 * 6)) % (12 * 6)
	fmt.Printf("%02d %02d\n", pos/6, (pos%6)*10)
}
