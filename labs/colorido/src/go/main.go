package main

import "fmt"

func main() {
	var missing int
	var foot string
	fmt.Scan(&missing, &foot)
	fmt.Print("[ ")
	for value := 0; value < 10; value++ {
		if value == missing {
			continue
		}
		fmt.Print(value, foot, " ")
		if foot == "d" {
			foot = "e"
		} else {
			foot = "d"
		}
	}
	if missing != 10 {
		fmt.Print("ceu ")
	}
	fmt.Println("]")
}
