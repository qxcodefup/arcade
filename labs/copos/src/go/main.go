package main

import "fmt"

func main() {
	var size int
	fmt.Scan(&size)
	for row := 0; row < size; row++ {
		for dot := 0; dot < size-1-row; dot++ {
			fmt.Print(".")
		}
		for col := 0; col <= row; col++ {
			if col > 0 {
				fmt.Print(".")
			}
			fmt.Print(size)
		}
		for dot := 0; dot < size-1-row; dot++ {
			fmt.Print(".")
		}
		fmt.Println()
	}
}
