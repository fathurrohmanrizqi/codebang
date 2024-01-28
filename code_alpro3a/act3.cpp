#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    int nim;
    string jurusan;
    int tahunMasuk;
};

int main() {
    Mahasiswa mahasiswa1;
    Mahasiswa mahasiswa2;

    cout << "Masukkan informasi Mahasiswa 1: " << endl;
    cout << "Nama: ";
    getline(cin, mahasiswa1.nama); 
    cout << "NIM: ";
    cin >> mahasiswa1.nim;
    cin.ignore(); 
    cout << "Jurusan: ";
    getline(cin, mahasiswa1.jurusan);
    
    cout << "Masukkan informasi Mahasiswa 2: " << endl;
    cout << "Nama: ";
    getline(cin, mahasiswa2.nama); 
    cout << "NIM: ";
    cin >> mahasiswa2.nim;
    cin.ignore(); 
    cout << "Jurusan: ";
    getline(cin, mahasiswa2.jurusan);
    
    cout << "Informasi Mahasiswa 1 : " << endl;
	cout << "Nama : " << mahasiswa1.nama << endl;
	cout << "NIM : " << mahasiswa1.nim << endl;
	cout << "Jurusam : " << mahasiswa1.jurusan << endl;
	
    cout << "Informasi Mahasiswa 2 : " << endl;
	cout << "Nama : " << mahasiswa2.nama << endl;
	cout << "NIM : " << mahasiswa2.nim << endl;
	cout << "Jurusan : " << mahasiswa2.jurusan << endl;
	return 0;
}
