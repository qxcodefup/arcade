package main

import "fmt"

func main() {
	var size int
	fmt.Scan(&size)
	arena := make([]string, size)
	lionRow, lionColumn := -1, -1
	for row := 0; row < size; row++ {
		cells := make([]string, size)
		for column := range cells {
			fmt.Scan(&cells[column])
			if cells[column] == "L" {
				lionRow, lionColumn = row, column
			}
		}
		arena[row] = ""
		for _, cell := range cells {
			arena[row] += cell
		}
	}
	gladiators, condemned := 0, 0
	for row, line := range arena {
		for column, cell := range line {
			if row == lionRow || column == lionColumn {
				continue
			}
			switch cell {
			case 'G':
				gladiators += 2
			case 'C':
				condemned++
				if row+column == size-1 {
					condemned++
				}
			}
		}
	}
	switch {
	case gladiators > condemned:
		fmt.Println("Gladiadores")
	case condemned > gladiators:
		fmt.Println("Condenados a morte")
	default:
		fmt.Println("Ninguem")
	}
}
