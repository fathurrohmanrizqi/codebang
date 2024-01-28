package main

import "fmt"

func main() {
	var baris, kolom int

	fmt.Print("Masukkan jumlah baris matriks: ")
	fmt.Scan(&baris)

	fmt.Print("Masukkan jumlah kolom matriks: ")
	fmt.Scan(&kolom)

	matriks := make([][]int, baris)

	for i := range matriks {
		matriks[i] = make([]int, kolom)
	}

	fmt.Println("Masukkan nilai matriks:")
	for i := 0; i < baris; i++ {
		for j := 0; j < kolom; j++ {
			fmt.Printf("Matriks[%d][%d]: ", i, j)
			fmt.Scan(&matriks[i][j])
		}
	}

	fmt.Println("\nIsi Matriks:")
	for i := 0; i < baris; i++ {
		for j := 0; j < kolom; j++ {
			fmt.Printf("%d ", matriks[i][j])
		}
		fmt.Println()
	}
}