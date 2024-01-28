package main

import "fmt"

func main(){
	var (
		nama string
		kelas string
		npm string
		matkul string
		status string
		uas int
		uts int
		total float64
	)

	fmt.Print("Masukkan nama: ")
	fmt.Scan(&nama)
	fmt.Print("Masukkan kelas: ")
	fmt.Scan(&kelas)
	fmt.Print("Masukkan npm: ")
	fmt.Scan(&npm)
	fmt.Print("Mata Kuliah: ")
	fmt.Scan(&matkul)
	fmt.Print("UTS: ")
	fmt.Scan(&uts)
	fmt.Print("UAs: ")
	fmt.Scan(&uas)
	total = ((float64(uts) + float64(uas)) / 2)

	if total >=  90 {
		status = "Lulus, grade A"
	} else if total >=  80 {
		status = "Lulus, grade B"
	} else if total >=  70 {
		status = "Lulus, grade C"
	} else if total >=  60 {
		status = "Lulus, grade D"
	} else {
		status = "tidak lulus, grade E"
	}

	fmt.Println("===============Hasil==========")
	fmt.Println("Nama saya, %s\n", nama)
	fmt.Println("NPM, %s\n", npm)
	fmt.Println("Kelas: , %s\n", kelas)
	fmt.Println("Mata Kuliah, %s\n", matkul)
	fmt.Println("Nilai, %3.f\n", total)
	fmt.Println("Status: ", status)
}