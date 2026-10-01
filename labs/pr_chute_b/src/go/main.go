package main

import (
	"bufio"
	"fmt"
	"os"
	"time"
)

func main() {
	inf := 0
	sup := 100
	scanner := bufio.NewScanner(os.Stdin)

	for {
		chute := int(time.Now().UnixNano()%int64(sup-inf-1)) + inf + 1
		fmt.Print("]", inf, ", ", sup, "[ É ", chute, "?\n")

		var resposta string
		for {
			fmt.Print("Acertei(=), É maior(>), É menor(<)? ")
			if !scanner.Scan() {
				return
			}
			resposta = scanner.Text()
			if resposta == "=" || resposta == ">" || resposta == "<" {
				break
			}
		}

		if resposta == "=" {
			fmt.Println("ganhei")
			return
		}
		if resposta == ">" {
			inf = chute
		} else {
			sup = chute
		}

		if sup-inf == 2 {
			fmt.Println("perdeu")
			return
		}
	}
}
