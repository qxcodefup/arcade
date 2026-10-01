package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	bestTrack, bestEffort := 1, int(^uint(0)>>1)
	for track := 1; track <= n; track++ {
		var m int
		fmt.Scan(&m)
		heights := make([]int, m)
		for i := range heights {
			fmt.Scan(&heights[i])
		}
		forward, backward := 0, 0
		for i := 1; i < m; i++ {
			if heights[i] > heights[i-1] {
				forward += heights[i] - heights[i-1]
			}
			if heights[m-i-1] > heights[m-i] {
				backward += heights[m-i-1] - heights[m-i]
			}
		}
		effort := forward
		if backward < effort {
			effort = backward
		}
		if effort < bestEffort {
			bestEffort = effort
			bestTrack = track
		}
	}
	fmt.Println(bestTrack)
}
