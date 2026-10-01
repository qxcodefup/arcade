package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	s := bufio.NewScanner(os.Stdin)
	s.Scan()
	text := s.Text()
	s.Scan()
	key := 0
	fmt.Sscan(s.Text(), &key)
	digits := []byte(fmt.Sprint(key))
	out := make([]byte, len(text))
	for i := 0; i < len(text); i++ {
		out[i] = text[i] ^ (digits[i%len(digits)] - '0')
	}
	fmt.Println(string(out))
}
