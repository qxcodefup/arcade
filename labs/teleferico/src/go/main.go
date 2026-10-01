package main

import "fmt"

func main() {
	var capacity, students int
	fmt.Scan(&capacity, &students)
	seats := capacity - 1
	trips := (students + seats - 1) / seats
	fmt.Println(trips)
}
