package main

import "fmt"

func main() {
	var album, n, value int
	fmt.Scan(&album, &n)
	counts := make([]int, album+1)
	for i := 0; i < n; i++ {
		fmt.Scan(&value)
		if value >= 1 && value <= album {
			counts[value]++
		}
	}
	fmt.Print("[ ")
	for sticker := 1; sticker <= album; sticker++ {
		for copy := 1; copy < counts[sticker]; copy++ {
			fmt.Print(sticker, " ")
		}
	}
	fmt.Println("]")
	fmt.Print("[ ")
	for sticker := 1; sticker <= album; sticker++ {
		if counts[sticker] == 0 {
			fmt.Print(sticker, " ")
		}
	}
	fmt.Println("]")
}
