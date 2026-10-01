package main

import "fmt"

func main() {
	var b, t int
	fmt.Scan(&b, &t)
	area := 35 * (b + t)
	if area > 5600 {
		fmt.Println(1)
	} else if area < 5600 {
		fmt.Println(2)
	} else {
		fmt.Println(0)
	}
}
