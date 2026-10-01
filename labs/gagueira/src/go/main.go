package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	s := bufio.NewScanner(os.Stdin)
	s.Scan()
	words := strings.Split(s.Text(), " ")
	for i, w := range words {
		if i > 0 {
			fmt.Print(" ")
		}
		fmt.Print(w, " ", w)
	}
	fmt.Println()
}
