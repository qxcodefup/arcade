package main

import "fmt"

func main() {
	var name string
	var age int
	fmt.Scan(&name, &age)
	category := "mumia"
	if age < 12 {
		category = "crianca"
	} else if age < 18 {
		category = "jovem"
	} else if age < 65 {
		category = "adulto"
	} else if age < 1000 {
		category = "idoso"
	}
	fmt.Printf("%s eh %s\n", name, category)
}
