package main

import "fmt"

func main() {
	var digits, wanted int
	fmt.Scan(&digits, &wanted)
	low := 1
	for i := 1; i < digits; i++ {
		low *= 10
	}
	high := low*10 - 1
	found := map[int]bool{}
	values := make([]int, 0)
	for left := high; left >= low; left-- {
		for right := left; right >= low; right-- {
			product := left * right
			if !found[product] && isPalindrome(product) {
				found[product] = true
				values = append(values, product)
			}
		}
	}
	sortDescending(values)
	for i := 0; i < wanted && i < len(values); i++ {
		fmt.Println(values[i])
	}
}
func isPalindrome(value int) bool {
	original := value
	reverse := 0
	for value > 0 {
		reverse = reverse*10 + value%10
		value /= 10
	}
	return reverse == original
}
func sortDescending(values []int) {
	for i := 1; i < len(values); i++ {
		value := values[i]
		j := i - 1
		for j >= 0 && values[j] < value {
			values[j+1] = values[j]
			j--
		}
		values[j+1] = value
	}
}
