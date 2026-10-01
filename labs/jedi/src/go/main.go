package main

import "fmt"

func main() {
	var n, value int
	fmt.Scan(&n)
	jedi, sith := 0, 0
	for i := 0; i < n; i++ {
		fmt.Scan(&value)
		if i < n/2 {
			jedi += value
		} else {
			sith += value
		}
	}
	if jedi > sith {
		fmt.Println("Jedi")
	} else if sith > jedi {
		fmt.Println("Sith")
	} else {
		fmt.Println("Empate")
	}
}
