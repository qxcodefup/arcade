package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func existe(mat [][]int, num int) bool {
	for _, line := range mat {
		for _, val := range line {
			if val == num {
				return true
			}
		}
	}
	return false
}

func main() {
	mat := [][]int{
		{1, 9, 27, 23},
		{34, 20, 37, 47},
		{30, 87, 55, 69},
		{13, 60, 99, 66},
	}
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	line := scanner.Text()
	fields := strings.Fields(line)
	count := 0
	for _, value := range fields {
		var num int
		fmt.Sscanf(value, "%d", &num)
		if existe(mat, num) {
			count += 1
		}
	}
	fmt.Printf("%d\n", count)

}
