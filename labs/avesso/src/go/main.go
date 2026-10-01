package main

import "fmt"

func main() {
	var tests int
	fmt.Scan(&tests)
	for test := 0; test < tests; test++ {
		var n, called int
		fmt.Scan(&n, &called)
		people := make([]int, n)
		for i := range people {
			fmt.Scan(&people[i])
		}
		for i, person := range people {
			if abs(person) == abs(called) {
				if i > 0 {
					people[i-1] *= -1
				}
				if i+1 < n {
					people[i+1] *= -1
				}
				break
			}
		}
		fmt.Print("[")
		for i, person := range people {
			if i > 0 {
				fmt.Print(" ")
			}
			fmt.Print(person)
		}
		fmt.Println("]")
	}
}

func abs(value int) int {
	if value < 0 {
		return -value
	}
	return value
}
