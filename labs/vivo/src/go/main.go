package main

import "fmt"

func main() {
	test := 0
	for {
		var p, r int
		fmt.Scan(&p, &r)
		if p == 0 && r == 0 {
			return
		}
		ids := make([]int, p)
		for i := range ids {
			fmt.Scan(&ids[i])
		}
		for round := 0; round < r; round++ {
			var n, command int
			fmt.Scan(&n, &command)
			survivors := make([]int, 0, n)
			for i := 0; i < n; i++ {
				var action int
				fmt.Scan(&action)
				if action == command {
					survivors = append(survivors, ids[i])
				}
			}
			ids = survivors
		}
		test++
		fmt.Println("Teste", test)
		fmt.Println(ids[0])
	}
}
