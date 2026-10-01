package main

import "fmt"

func main() {
	var alphabetSize, count int
	var alphabet, password string
	fmt.Scan(&alphabetSize, &count, &alphabet, &password)
	symbols := []rune(alphabet)
	current := []rune(password)
	for output := 0; output < count; output++ {
		for place := len(current) - 1; place >= 0; place-- {
			index := 0
			for i, symbol := range symbols {
				if symbol == current[place] {
					index = i
					break
				}
			}
			current[place] = symbols[(index+1)%len(symbols)]
			if index+1 < len(symbols) {
				break
			}
		}
		fmt.Println(string(current))
	}
}
