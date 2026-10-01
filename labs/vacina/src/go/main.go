package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	vaccines := make([]int, n)
	patients := make([]int, n)
	for i := range vaccines {
		fmt.Scan(&vaccines[i])
	}
	for i := range patients {
		fmt.Scan(&patients[i])
	}
	sortInts(vaccines)
	sortInts(patients)
	for i := range vaccines {
		if vaccines[i] <= patients[i] {
			fmt.Println("No")
			return
		}
	}
	fmt.Println("Yes")
}
func sortInts(values []int) {
	for i := 1; i < len(values); i++ {
		value := values[i]
		j := i - 1
		for j >= 0 && values[j] > value {
			values[j+1] = values[j]
			j--
		}
		values[j+1] = value
	}
}
