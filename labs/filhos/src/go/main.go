package main

import "fmt"

func main() {
	var age, count int
	fmt.Scan(&age, &count)
	for child := 0; child < count; child++ {
		fmt.Println(age + 2*child)
	}
}
