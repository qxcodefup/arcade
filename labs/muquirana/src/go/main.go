package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	melhorMedia := -1
	melhorID := -1
	for i := 0; i < n; i++ {
		var codigo string
		fmt.Scan(&codigo)
		id := int(codigo[0]-'0')*10 + int(codigo[1]-'0')
		soma := 0
		for j := 2; j < len(codigo); j++ {
			soma += int(codigo[j] - '0')
		}
		if soma > melhorMedia || soma == melhorMedia && id > melhorID {
			melhorMedia = soma
			melhorID = id
		}
	}
	if melhorID < 10 {
		fmt.Print("0")
	}
	fmt.Println(melhorID)
}
