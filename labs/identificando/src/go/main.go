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
	fields := strings.Fields(scanner.Text())
	for i, field := range fields {
		if i > 0 {
			fmt.Print(" ")
		}
		kind := "int"
		for _, char := range field {
			if (char < '0' || char > '9') && char != '-' && char != '.' {
				kind = "str"
				break
			}
		}
		if kind != "str" && strings.ContainsRune(field, '.') {
			kind = "float"
		}
		fmt.Print(kind)
	}
	fmt.Println()
}
