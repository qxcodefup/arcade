package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	s := bufio.NewScanner(os.Stdin)
	s.Scan()
	total := 0
	for _, c := range s.Text() {
		total += int(c)
	}
	fmt.Println(total % 50)
}
