#include <iostream>

using namespace std;



double tambah(double num1, double num2) {
    return num1 + num2;
}

double kurang(double num1, double num2) {
    return num1 - num2;
}

double kali(double num1, double num2) {
    return num1 * num2;
}

double bagi(double num1, double num2) {
    return static_cast<float>(num1) / num2;
}

struct Mahasiswa  {
	string nama, kelas;
	int npm;
};

int main(){
	int pilihan;

    cout << "=======================" << endl;
    cout << "##  MENU UJIAN - 80  ##" << endl;
    cout << "=======================" << endl;
    cout << "Pilihan Menu: " << endl;
    cout << "1. Kalkulator" << endl;
    cout << "2. Data Mahasiswa" << endl;
    cout << "3. Keluar" << endl;

    cout << "Pilih menu (1-3): ";
    cin >> pilihan;
    
    switch (pilihan){
    	case 1:{
    		cout << "=======================" << endl;
		    cout << "##  	Kalkulator	  ##" << endl;
		    cout << "=======================" << endl;
		    double num1, num2;
		    
		    cout << "Masukkan angka pertama: ";
		    cin >> num1;
		    cout << "Masukkan angka kedua: ";
		    cin >> num2;
		    
		    cout<<num1<<" + "<<num2<<" = "<<tambah(num1, num2)<<endl;
			cout<<num1<<" - "<<num2<<" = "<<kurang(num1, num2)<<endl;
			cout<<num1<<" * "<<num2<<" = "<<kali(num1, num2)<<endl;
			cout<<num1<<" : "<<num2<<" = "<<bagi(num1, num2)<<endl;
			cout<<endl;
			break;
		}
		
		case 2:{
			cout << "=======================" << endl;
		    cout << "##   Data Mahasiswa  ##" << endl;
		    cout << "=======================" << endl;
		    int jumlahMahasiswa, npm;
		    char nama, kelas;
		    cout << "Masukkan jumlah Mahasiswa: ";
		    cin >> jumlahMahasiswa;
		    cin.ignore();
		    cout << "" << endl;
		    
		    Mahasiswa mahasiswas[jumlahMahasiswa];
		    
		    cout << "=======================" << endl;
		    for (int i = 0; i < jumlahMahasiswa; ++i) {
		        cout << "Masukkan Mahasiswa ke-" << i + 1 << endl;
		
		        cout << "Nama: ";
		        getline(cin, mahasiswas[i].nama);
		        
		        cout << "NPM: ";
		        cin >> mahasiswas[i].npm;
		        cin.ignore();
		
		        cout << "Kelas: ";
		        getline(cin, mahasiswas[i].kelas);
		        cout << endl;
		    }
		
		    cout << "\n--- DATA MAHASISWA ---" << endl;
		    for (int i = 0; i < jumlahMahasiswa; ++i) {
		        cout << "\nMahasiswa Ke-" << i + 1 << endl;
		        cout << "Nama: " << mahasiswas[i].nama << endl;
		        cout << "NPM: " << mahasiswas[i].npm << endl;
		        cout << "Kelas: " << mahasiswas[i].kelas << endl;
		        cout << endl;
		        cout << "=======================" << endl;
		    }
			break;
		}
	}
	return 0;
}
