package main

import "fmt"

func main() { var rows, cols int; fmt.Scan(&rows, &cols); fmt.Println((rows + cols + 1) % 2) }
