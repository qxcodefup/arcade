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
	var cases int
	fmt.Sscan(scanner.Text(), &cases)
	for i := 0; i < cases; i++ {
		if !scanner.Scan() {
			return
		}
		code := strings.ToLower(scanner.Text())
		if !scanner.Scan() {
			return
		}
		person := strings.ToLower(scanner.Text())
		matches := 0
		for _, char := range person {
			if strings.ContainsRune(code, char) {
				matches++
			}
		}
		if matches == len([]rune(person)) {
			fmt.Println("chefe")
		} else if matches*2 > len([]rune(person)) {
			fmt.Println("ultron")
		} else {
			fmt.Println("pessoa")
		}
	}
}
