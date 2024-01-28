package main

import "fmt"

// Definisi struct Mahasiswa
type Mahasiswa struct {
	Nama    string
	NIM     string
	Jurusan string
}

func main() {
	// Meminta input dari pengguna untuk jumlah mahasiswa
	var jumlahMahasiswa int
	fmt.Print("Masukkan jumlah mahasiswa: ")
	fmt.Scan(&jumlahMahasiswa)

	// Mendefinisikan array dari struct Mahasiswa
	mahasiswas := make([]Mahasiswa, jumlahMahasiswa)

	// Mengisi data mahasiswa ke dalam array dengan inputan pengguna
	for i := 0; i < len(mahasiswas); i++ {
		fmt.Printf("Data Mahasiswa %d:\n", i+1)

		fmt.Print("Nama: ")
		fmt.Scan(&mahasiswas[i].Nama)

		fmt.Print("NIM: ")
		fmt.Scan(&mahasiswas[i].NIM)

		fmt.Print("Jurusan: ")
		fmt.Scan(&mahasiswas[i].Jurusan)

		fmt.Println("..............")
	}

	// Menampilkan data mahasiswa menggunakan array
	fmt.Println("\nData Mahasiswa:")
	for i := 0; i < len(mahasiswas); i++ {
		fmt.Printf("Nama: %s\n", mahasiswas[i].Nama)
		fmt.Printf("NIM: %s\n", mahasiswas[i].NIM)
		fmt.Printf("Jurusan: %s\n", mahasiswas[i].Jurusan)
		fmt.Println()
	}
}