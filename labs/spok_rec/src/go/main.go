package main

import "fmt"

func inverter(numero, invertido int) int {
	if numero == 0 {
		return invertido
	}
	return inverter(numero/10, invertido*10+numero%10)
}

func main() {
	var id int
	fmt.Scan(&id)
	if id == inverter(id, 0) {
		fmt.Println(1)
	} else {
		fmt.Println(0)
	}
}
