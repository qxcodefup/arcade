package main

import "fmt"

func main() {
	var capacity int
	fmt.Scan(&capacity)
	count := 0
	for {
		var movement int
		if _, err := fmt.Scan(&movement); err != nil {
			return
		}
		count += movement
		if count == 0 {
			fmt.Println("vazio")
		} else if count < capacity {
			fmt.Println("ainda cabe")
		} else if count < 2*capacity {
			fmt.Println("lotado")
		} else {
			fmt.Println("hora de partir")
			return
		}
	}
}
