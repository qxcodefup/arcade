package main

import "fmt"

func value(word string) int {
	sum := 0
	for _, char := range word {
		sum += int(char)
	}
	return sum % 50
}

func main() {
	var word string
	fmt.Scan(&word)
	originalValue := value(word)
	bestValue := originalValue
	bestWord := word
	for char := 'a'; char <= 'z'; char++ {
		candidate := word + string(char)
		candidateValue := value(candidate)
		if candidateValue < bestValue {
			bestValue = candidateValue
			bestWord = candidate
		}
	}
	fmt.Println(originalValue)
	fmt.Println(bestWord)
	fmt.Println(bestValue)
}
