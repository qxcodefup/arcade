package main

import "fmt"

func main() {
	var pa, pg, ra, rg float64
	fmt.Scan(&pa, &pg, &ra, &rg)
	if pa/ra < pg/rg {
		fmt.Println("A")
	} else {
		fmt.Println("G")
	}
}
