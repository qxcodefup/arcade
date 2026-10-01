package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	s := bufio.NewScanner(os.Stdin)
	s.Scan()
	sum := 0
	for _, w := range strings.Split(s.Text(), " ") {
		if n, e := strconv.Atoi(w); e == nil {
			sum += n
		}
	}
	fmt.Println(sum)
}
