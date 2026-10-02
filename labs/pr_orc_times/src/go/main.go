package main

import (
	"fmt"
	"math/rand/v2"
)

type Orc struct {
	id         int
	nome       string
	forca      int
	vida       int
	revidar    int
	maxRevidar int
	raiva      int
}

func main() {
	equipeA := criarEquipe(0)
	equipeB := criarEquipe(4)
	rodada := 1

	for len(equipeA) > 0 && len(equipeB) > 0 {
		for i := range equipeA {
			equipeA[i].revidar = equipeA[i].maxRevidar
		}
		for i := range equipeB {
			equipeB[i].revidar = equipeB[i].maxRevidar
		}

		for i := 0; i < 4; i++ {
			if len(equipeA) > 0 && len(equipeB) > 0 {
				atacar(&equipeA, &equipeB, i)
			}
			if len(equipeA) > 0 && len(equipeB) > 0 {
				atacar(&equipeB, &equipeA, i+4)
			}
		}
		fmt.Println("Fim da rodada", rodada)
		rodada++
	}

	if len(equipeA) > 0 {
		fmt.Println("Equipe vencedora: A")
	} else if len(equipeB) > 0 {
		fmt.Println("Equipe vencedora: B")
	} else {
		fmt.Println("As duas equipes foram eliminadas.")
	}
}

func criarEquipe(idInicial int) []Orc {
	equipe := make([]Orc, 4)
	for i := range equipe {
		equipe[i] = Orc{
			id:         idInicial + i,
			nome:       criarNome(),
			forca:      rand.IntN(10) + 1,
			vida:       rand.IntN(10) + 1,
			maxRevidar: rand.IntN(4),
			raiva:      rand.IntN(3) + 1,
		}
	}
	return equipe
}

func atacar(atacantes, alvos *[]Orc, idAtacante int) {
	if len(*atacantes) == 0 || len(*alvos) == 0 {
		return
	}
	indiceAtacante := -1
	for i := range *atacantes {
		if (*atacantes)[i].id == idAtacante {
			indiceAtacante = i
			break
		}
	}
	if indiceAtacante == -1 {
		return
	}
	indiceAlvo := rand.IntN(len(*alvos))
	atacante := &(*atacantes)[indiceAtacante]
	alvo := &(*alvos)[indiceAlvo]
	alvo.vida -= atacante.forca
	fmt.Println(atacante.nome, "ataca", alvo.nome)
	if alvo.vida < 0 {
		fmt.Println(alvo.nome, "foi eliminado")
		*alvos = remover(*alvos, indiceAlvo)
		return
	}

	if alvo.revidar > 0 {
		alvo.revidar--
		atacante.vida -= alvo.forca / 2
		fmt.Println(alvo.nome, "revida contra", atacante.nome)
		if atacante.vida < 0 {
			fmt.Println(atacante.nome, "foi eliminado")
			*atacantes = remover(*atacantes, indiceAtacante)
		}
	} else {
		alvo.forca += alvo.raiva
	}
}

func remover(equipe []Orc, indice int) []Orc {
	equipe[indice] = equipe[len(equipe)-1]
	return equipe[:len(equipe)-1]
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
