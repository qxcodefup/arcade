package main

import "fmt"

func main() {
	var a, b, c, d string
	fmt.Scan(&a, &b, &c, &d)
	score := 0
	if a == "d" {
		score++
	}
	if b == "a" {
		score++
	}
	if c == "c" {
		score++
	}
	if d == "d" {
		score++
	}
	answers := [5]string{"Nunca assistiu", "Ja ouviu falar", "Interessado no assunto", "Fa", "Super Fa"}
	fmt.Println(answers[score])
}
