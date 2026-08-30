package main

import (
	"bufio"
	"cmp"
	"fmt"
	"os"
	"slices"
)

type Student struct {
	name                string
	n1, n2, n3, average float64
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	if !scanner.Scan() {
		panic("Failed to scan student count")
	}
	line := scanner.Text()
	var qtd int
	fmt.Sscan(line, &qtd)
	students := make([]Student, qtd)
	for i := 0; i < qtd; i++ {
		var s *Student = &students[i] // criando um ponteiro para o estudante atual
		if !scanner.Scan() {
			panic("Failed to scan student name")
		}
		s.name = scanner.Text()
		if !scanner.Scan() {
			panic("Failed to scan student grades")
		}
		line = scanner.Text()
		fmt.Sscan(line, &s.n1, &s.n2, &s.n3)
		s.average = (s.n1 + s.n2 + s.n3) / 3.0
	}
	// sort by average
	slices.SortFunc(students, func(a, b Student) int {
		return cmp.Compare(b.average, a.average)
	})

	for i, s := range students {
		fmt.Printf("%d: %s\n", i, s.name)
		fmt.Printf("   Media: %.2f\n", s.average)
		fmt.Printf("   N1: %.2f, N2: %.2f, N3: %.2f\n", s.n1, s.n2, s.n3)
	}
}
