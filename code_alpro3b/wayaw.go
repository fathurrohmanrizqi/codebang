package main

import "fmt"

func main(){
	var tinggi int
	fmt.Print("Masukkan tinggi segitiga: ")
	fmt.Scan(&tinggi)

	fmt.Println("\nPola segitiga: ")
	for i := 1; i <= tinggi; i++{
		for j := 1; j <= i; j++{
			fmt.Print("* ")
		}
		fmt.Println()
	}

	fmt.Println("\nPola segitiga terbalik: ")
	for i := tinggi; i >= 1; i--{
		for j := 1; j <= i; j++{
			fmt.Print("* ")
		}
		fmt.Println()
	}
}