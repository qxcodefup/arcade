package main

import "fmt"

func main() {
	var id int
	fmt.Scan(&id)
	original, reverse := id, 0
	for id > 0 {
		reverse = reverse*10 + id%10
		id /= 10
	}
	if original == reverse {
		fmt.Println(1)
	} else {
		fmt.Println(0)
	}
}
