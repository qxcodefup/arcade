package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	if !scanner.Scan() {
		return
	}
	code := strings.ToLower(scanner.Text())
	if !scanner.Scan() {
		return
	}
	people := strings.Fields(scanner.Text())
	for i, person := range people {
		lower := strings.ToLower(person)
		matches := 0
		for _, char := range lower {
			if strings.ContainsRune(code, char) {
				matches++
			}
		}
		if i > 0 {
			fmt.Print(" ")
		}
		if matches == len([]rune(lower)) {
			fmt.Print("chefe")
		} else if matches*2 > len([]rune(lower)) {
			fmt.Print("ultron")
		} else {
			fmt.Print("pessoa")
		}
	}
	fmt.Println()
}
