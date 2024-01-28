package main

import "fmt"

type Mahasiswa struct {
	Nama    string
	NIM     string
	Jurusan string
}

func main() {
	var mhs Mahasiswa

	fmt.Print("Masukkan Nama Mahasiswa: ")
	fmt.Scan(&mhs.Nama)

	fmt.Print("Masukkan NIM Mahasiswa: ")
	fmt.Scan(&mhs.NIM)

	fmt.Print("Masukkan Jurusan Mahasiswa: ")
	fmt.Scan(&mhs.Jurusan)

	// Menampilkan data mahasiswa
	fmt.Println("\nData Mahasiswa:")
	fmt.Printf("Nama: %s\n", mhs.Nama)
	fmt.Printf("NIM: %s\n", mhs.NIM)
	fmt.Printf("Jurusan: %s\n", mhs.Jurusan)
}