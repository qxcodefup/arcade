package main

import (
	"fmt"
	"math/rand/v2"
)

type Orc struct {
	nome       string
	forca      int
	vida       int
	revidar    int
	revidarMax int
	raiva      int
}

func main() {
	fmt.Println("Escolha o nível: 1 - Aprendiz | 2 - Experiente")
	var nivel int
	if _, err := fmt.Scan(&nivel); err != nil {
		return
	}
	if nivel != 1 && nivel != 2 {
		fmt.Println("Nível inválido.")
		return
	}

	orcs := criarOrcs(nivel == 2)
	for _, orc := range orcs {
		fmt.Println(orc.nome, "força:", orc.forca, "vida:", orc.vida)
	}
	for len(orcs) > 1 {
		for i := range orcs {
			if nivel == 2 {
				orcs[i].revidar = orcs[i].revidarMax
			}
		}

		for i := range orcs {
			alvos := make([]int, 0, len(orcs)-1)
			for j := range orcs {
				if i != j {
					alvos = append(alvos, j)
				}
			}
			alvo := alvos[rand.IntN(len(alvos))]
			fmt.Println(orcs[i].nome, "ataca", orcs[alvo].nome)
			orcs[alvo].vida -= orcs[i].forca

			if nivel == 1 || orcs[alvo].revidar > 0 {
				if nivel == 2 {
					orcs[alvo].revidar--
				}
				orcs[i].vida -= orcs[alvo].forca / 2
				fmt.Println(orcs[alvo].nome, "revida contra", orcs[i].nome)
			} else {
				orcs[alvo].forca += orcs[alvo].raiva
				fmt.Println(orcs[alvo].nome, "aumenta a força")
			}
		}

		vivos := make([]Orc, 0, len(orcs))
		for _, orc := range orcs {
			if orc.vida > 0 {
				vivos = append(vivos, orc)
			}
		}
		orcs = vivos
	}

	if len(orcs) == 1 {
		fmt.Println("Vencedor:", orcs[0].nome)
	} else {
		fmt.Println("Não houve vencedor.")
	}
}

func criarOrcs(experiente bool) []Orc {
	orcs := make([]Orc, 10)
	for i := range orcs {
		orc := Orc{
			nome:  string(rune('A' + i)),
			forca: rand.IntN(10) + 1,
			vida:  rand.IntN(10) + 1,
		}
		if experiente {
			orc.nome = criarNome()
			orc.revidarMax = rand.IntN(4)
			orc.raiva = rand.IntN(3) + 1
		}
		orcs[i] = orc
	}
	return orcs
}

func criarNome() string {
	consoantes := "bcdfghjklmnpqrstvwxyz"
	vogais := "aeiou"
	nome := []byte{
		consoantes[rand.IntN(len(consoantes))] - 32,
		vogais[rand.IntN(len(vogais))],
		consoantes[rand.IntN(len(consoantes))],
		vogais[rand.IntN(len(vogais))],
	}
	return string(nome)
}
