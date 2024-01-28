#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
	string nama;
	int nim;
	string jurusan;
	int tahunMasuk;
};

int main(){
	print("Masukkan data Mahasiswa pertama: ")
	cin >> mahasiswa1;
	print("Nama: ")
	cin >> nama;
	print("NIM: ");
	cin >> nim;
	print("Jurusan: ");
	cin >> jurusan;
	getline ()
	Mahasiswa mahasiswa1;
	Mahasiswa mahasiswa2;
	
	mahasiswa1.nama = "Fathurrohman";
	mahasiswa1.nim = 51422475;
	mahasiswa1.jurusan = "Teknik Informatika";
	
	mahasiswa2.nama = "Kohar";
	mahasiswa2.nim = 51231477;
	mahasiswa2.jurusan = "Teknik Informatika";
	
	cout << "Informasi Mahasiswa 1: " << endl;
	cout << "Nama: " << mahasiswa1.nama <<endl;
	cout << "NIM: " << mahasiswa1.nim <<endl;
	cout << "Jurusan: " << mahasiswa1.jurusan <<endl;
	
	cout << "\Informasi Mahasiswa 2: " << endl;
	cout << "Nama: " << mahasiswa2.nama <<endl;
	cout << "NIM: " << mahasiswa2.nim <<endl;
	cout << "Jurusan: " << mahasiswa2.jurusan <<endl;
	return 0;
}
