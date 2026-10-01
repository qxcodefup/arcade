package main

import "fmt"

func main() {
	var n, start int
	fmt.Scan(&n, &start)
	alive := make([]bool, n)
	for i := range alive {
		alive[i] = true
	}
	current := start - 1
	remaining := n
	for remaining > 1 {
		killed := (current + 1) % n
		for !alive[killed] {
			killed = (killed + 1) % n
		}
		alive[killed] = false
		remaining--
		current = (killed + 1) % n
		for !alive[current] {
			current = (current + 1) % n
		}
	}
	for i, isAlive := range alive {
		if isAlive {
			fmt.Println(i + 1)
			return
		}
	}
}
