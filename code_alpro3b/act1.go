package main

import "fmt"

func main(){

	var(
	pil, uts, uas, tinggi int
	total float64
	nama, npm, kelas, matkul, status string
	)

	fmt.Println("====== menu ======")
	fmt.Println("1. Biodata nilai")
	fmt.Println("2. Pola bangun datar")
	fmt.Println("3. FizzBuzz")
	fmt.Println("Masukkan pilihan : ")
	fmt.Scan(&pil)

	switch pil {
	case 1:
		fmt.Println("")

		fmt.Print("Masukkan nama: ")
		fmt.Scan(&nama)
		
		fmt.Print("Masukkan kelas: ")
		fmt.Scan(&kelas)
		fmt.Print("Masukkan NPM: ")
		fmt.Scan(&npm)
		fmt.Print("Mata kuliah: ")
		fmt.Scan(&matkul)
		fmt.Print("UTS: ")
		fmt.Scan(&uts)
		fmt.Print("UAs: ")
		fmt.Scan(&uas)
		total = (float64(uts) + float64(uas)) / 2

		if total >= 90 {
			status = "Lulus, Grade A"
		} else if total >= 80 {
			status = "Lulus, Grade B"
		} else if total >= 70 {
			status = "Lulus, Grade C"
		} else if total >= 60 {
			status = "Lulus, Grade D"
		} else {
			status = "Tidak Lulus, Grade E"
		}

		fmt.Println("==== HASIL ====")
		fmt.Printf("Nama saya %s \n", nama)
		fmt.Printf("Npm saya %s \n", npm)
		fmt.Printf("Kelas saya %s \n", kelas)
		fmt.Printf("Matkul saya %s \n", matkul)
		fmt.Printf("Total saya %3.2f \n", total)
		fmt.Printf("Status: %s \n", status)
	case 2:
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
	case 3:
		var n int

		fmt.Print("Masukkan n: ")
		fmt.Scan(&n)

		for i := 1; i <= n; i++ {
			if i%5 == 0 && i%3 == 0 {
				fmt.Println("FizzBuzz")
			} else if i%3 == 0 {
				fmt.Println("Fizz")
			} else if i%5 == 0 {
				fmt.Println("Buzz")
			} else {
				fmt.Println(i)
			}
		}
	
	default:
		fmt.Println("Pilihan tidak ada")
}
}