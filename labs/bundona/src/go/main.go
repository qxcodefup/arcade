package main

import (
	"fmt"
	"strconv"
)

func main() {
	var hourText, minuteText, direction, distanceText string
	fmt.Scan(&hourText, &minuteText, &direction, &distanceText)
	hour, _ := strconv.Atoi(hourText)
	minute, _ := strconv.Atoi(minuteText)
	distance, _ := strconv.Atoi(distanceText)
	pos := hour*6 + minute/10
	if direction == "H" {
		pos += distance
	} else {
		pos -= distance
	}
	pos = (pos%(12*6) + (12 * 6)) % (12 * 6)
	fmt.Printf("%02d %02d\n", pos/6, (pos%6)*10)
}
