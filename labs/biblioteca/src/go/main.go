package main

import "fmt"

type Livro struct {
	titulo  string
	autor   string
	ano     int
	paginas int
}

func main() {
	var n int
	fmt.Scan(&n)

	livros := make([]Livro, n)
	for i := range livros {
		fmt.Scan(&livros[i].titulo, &livros[i].autor, &livros[i].ano, &livros[i].paginas)
	}

	var filtroAno int
	fmt.Scan(&filtroAno)

	encontrou := false
	for _, l := range livros {
		if l.ano >= filtroAno {
			encontrou = true
			fmt.Printf("%s - %s (%d, %d pags)\n", l.titulo, l.autor, l.ano, l.paginas)
		}
	}

	if !encontrou {
		fmt.Println("Nenhum livro encontrado")
	}
}
