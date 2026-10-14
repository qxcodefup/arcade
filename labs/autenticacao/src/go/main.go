package main

import "fmt"

type Usuario struct {
	login string
	senha string
	nome  string
}

func main() {
	var n int
	fmt.Scan(&n)

	usuarios := make([]Usuario, n)
	for i := range usuarios {
		fmt.Scan(&usuarios[i].login, &usuarios[i].senha, &usuarios[i].nome)
	}

	var loginBusca, senhaBusca string
	fmt.Scan(&loginBusca, &senhaBusca)

	for _, u := range usuarios {
		if u.login == loginBusca {
			if u.senha == senhaBusca {
				fmt.Printf("Acesso permitido: %s\n", u.nome)
			} else {
				fmt.Println("Senha incorreta")
			}
			return
		}
	}

	fmt.Println("Usuario nao encontrado")
}
