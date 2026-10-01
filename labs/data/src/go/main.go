package main

import "fmt"

func main() {
	var hour, minute, day, month, year int
	fmt.Scan(&hour, &minute, &day, &month, &year)
	fmt.Printf("%02d:%02d %02d/%02d/%02d\n", hour, minute, day, month, year%100)
}
