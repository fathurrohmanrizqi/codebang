#include <iostream>
#include <string>
using namespace std;

struct Barang {
    string barang;
    int harga;
};

int main(){
	Barang sukro = {"Sukro", 2000};
    Barang pilus = {"Pilus", 3000};
    Barang esteh = {"Esteh", 5000};
    Barang mineral = {"Air Mineral", 5000};
    
    int pil, jumlah, totalHarga = 0;
    char nambah;
	
	cout << "====================" << endl;
	cout << "   WARUNK KOHAR " << endl;
	cout << "1. Sukro Rp.2000" << endl;
	cout << "2. Pilus Rp.3000" << endl;
	cout << "3. Esteh Rp.5000" << endl;
	cout << "4. Air mineral Rp.5000" << endl;
	cout << "5. Exit" << endl;
	cout << "====================" << endl;
	
	do {
		cout << "Mau beli apa mas? ";
		cin >> pil;
		
		switch (pil){
			case 1:
				cout << "Mau berapa banyak? ";
				cin >> jumlah;
				totalHarga += sukro.harga * jumlah;
				cout << "Kamu memesan " << jumlah << " " << sukro.barang << ", Harganya Rp." << sukro.harga * jumlah <<endl;
				break;
			case 2:
				cout << "Mau berapa banyak? ";
				cin >> jumlah;
				totalHarga += pilus.harga * jumlah;
				cout << "Kamu memesan " << jumlah << " " << pilus.barang << ", Harganya Rp." << pilus.harga * jumlah <<endl;
				break;
			case 3:
				cout << "Mau berapa banyak? ";
				cin >> jumlah;
				totalHarga += esteh.harga * jumlah;
				cout << "Kamu memesan " << jumlah << " " << esteh.barang << ", Harganya Rp." << esteh.harga * jumlah <<endl;
				break;
			case 4:
				cout << "Mau berapa banyak? ";
				cin >> jumlah;
				totalHarga += mineral.harga * jumlah;
				cout << "Kamu memesan " << jumlah << " " << mineral.barang << ", Harganya Rp." << mineral.harga * jumlah <<endl;
				break;
			case 5:
				cout << "Terimakasih!" << endl;
				break;
			default:
				cout << "Pilihan tidak valid. Silakan pilih lagi." << endl;
				break;
		}
		
		if (pil >= 1 && pil <= 4) {
            cout << "Mau nambah apa mas? (y/n): ";
            cin >> nambah;
        } else {
            nambah = 'n';
        }
				
	} while (nambah == 'y' || nambah == 'Y');

    cout << "====================" << endl;
    cout << "Total harga: Rp." << totalHarga << endl;
    cout << "Terima kasih sudah berbelanja di Warunk Kohar!" << endl;
}

