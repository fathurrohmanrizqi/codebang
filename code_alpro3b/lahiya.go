package main

import "fmt"

func main() {
	var panjangArray int
	fmt.Print("Masukkan panjang array: ")
	fmt.Scan(&panjangArray)

	array := make([]int, panjangArray)

	fmt.Println("Masukkan nilai array:")
	for i := 0; i < panjangArray; i++ {
		fmt.Printf("Array[%d]: ", i)
		fmt.Scan(&array[i])
	}

	fmt.Println("\nIsi Array:")
	for i := 0; i < panjangArray; i++ {
		fmt.Printf("%d ", array[i])
	}

	fmt.Println()
}
