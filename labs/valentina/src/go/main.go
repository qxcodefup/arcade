package main

import "fmt"

func main() {
	var left, operation, right string
	fmt.Scan(&left, &operation, &right)
	a := int(left[0] - 'a')
	b := int(right[0] - 'a')
	if operation == "+" {
		fmt.Println(string(rune('a' + (a+b)%26)))
	} else {
		fmt.Println(string(rune('a' + (a-b+26)%26)))
	}
}
