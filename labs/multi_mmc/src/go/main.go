package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)

	numbers := make([]int, n)
	for i := range numbers {
		fmt.Scan(&numbers[i])
	}

	fmt.Println(mmc(numbers))
}

func mmc(numbers []int) int {
	if len(numbers) == 0 {
		return 0
	}

	result := numbers[0]
	for _, number := range numbers[1:] {
		if result == 0 || number == 0 {
			return 0
		}
		result = result / mdc(result, number) * number
	}
	if result < 0 {
		return -result
	}
	return result
}

func mdc(a, b int) int {
	if a < 0 {
		a = -a
	}
	if b < 0 {
		b = -b
	}
	for b != 0 {
		a, b = b, a%b
	}
	return a
}
