package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	if scanner.Scan() {
		words := strings.Fields(scanner.Text())
		values := make([]int, len(words))
		for i, word := range words {
			values[i], _ = strconv.Atoi(word)
		}

		fmt.Print("[ ")
		for i := len(values) - 1; i >= 0; i-- {
			fmt.Print(values[i], " ")
		}
		fmt.Println("]")
	}
}
