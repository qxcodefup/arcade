package main

import "fmt"

func main() {
	var sum int
	fmt.Scan(&sum)
	if sum == 0 {
		fmt.Println("joguem de novo")
	} else {
		fmt.Printf("%c\n", 'a'+rune((sum-1)%26))
	}
}
