package main

import "fmt"

func main() {
	var kind string
	var force int
	fmt.Scan(&kind, &force)
	factor := 18
	if kind == "b" {
		factor = 20
	}
	power := float64(force*factor-80) / 10
	if power < 150 {
		fmt.Println("Fraco, nem passou")
	} else if power < 180 {
		fmt.Println("Perfeito")
	} else if power < 210 {
		fmt.Println("Satisfeito")
	} else {
		fmt.Println("Muito forte, bola fora")
	}
}
