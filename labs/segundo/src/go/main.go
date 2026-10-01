package main

import "fmt"

func main() {
	var h, m, s int
	fmt.Scan(&h, &m, &s)
	total := (h*3600 + m*60 + s + 1) % (24 * 3600)
	fmt.Printf("%02d %02d %02d\n", total/3600, total/60%60, total%60)
}
