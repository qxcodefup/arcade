package main

import (
	"fmt"
	"time"
)

func main() {
	inferior := 0
	superior := 100
	secreto := int(time.Now().UnixNano()%99) + 1

	for {
		fmt.Print("Diga um número entre ]", inferior, ", ", superior, "[: ")
		var chute int
		if _, err := fmt.Scan(&chute); err != nil {
			return
		}

		if chute <= inferior || chute >= superior {
			fmt.Println("Chute fora do intervalo.")
			continue
		}

		if chute == secreto {
			fmt.Print("Era ", secreto, ", você ganhou!\n")
			return
		}

		if chute > secreto {
			superior = chute
		} else {
			inferior = chute
		}

		if superior-inferior == 2 {
			fmt.Print("Era ", secreto, ", você perdeu!\n")
			return
		}
	}
}
