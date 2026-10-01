package main

import "fmt"

func main() {
	var count int
	fmt.Scan(&count)
	seen := make(map[int]bool, count)
	unique := make([]int, 0, count)
	for i := 0; i < count; i++ {
		var animal int
		fmt.Scan(&animal)
		if !seen[animal] {
			seen[animal] = true
			unique = append(unique, animal)
		}
	}
	for i := 1; i < len(unique); i++ {
		value := unique[i]
		j := i - 1
		for j >= 0 && unique[j] > value {
			unique[j+1] = unique[j]
			j--
		}
		unique[j+1] = value
	}
	for i, animal := range unique {
		if i > 0 {
			fmt.Print(" ")
		}
		fmt.Print(animal)
	}
	fmt.Println()
}
