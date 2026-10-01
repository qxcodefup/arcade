package main

import "fmt"

func main() {
	var day, hour int
	fmt.Scan(&day, &hour)
	working := false
	if day >= 2 && day <= 6 {
		working = (hour >= 8 && hour <= 11) || (hour >= 14 && hour <= 17)
	} else if day == 7 {
		working = hour >= 8 && hour <= 11
	}
	if working {
		fmt.Println("SIM")
	} else {
		fmt.Println("NAO")
	}
}
