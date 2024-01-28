#include <iostream>
using namespace std;

int main() {
    char lanjut;
    double angka1, angka2, hasil = 0;
    char operasi;
    bool gunakanHasilTerakhir = false;

    do {
        if (!gunakanHasilTerakhir) {
            cout << "Masukkan angka pertama: ";
            cin >> angka1;
        } else {
            angka1 = hasil; 
        }

        cout << "Masukkan operasi (+, -, *, ,^ , /): ";
        cin >> operasi;

        cout << "Masukkan angka kedua: ";
        cin >> angka2;

        switch (operasi) {
            case '+':
                hasil = angka1 + angka2;
                break;
            case '-':
                hasil = angka1 - angka2;
                break;
            case '*':
                hasil = angka1 * angka2;
                break;
            case '/':
                if (angka2 != 0) {
                    hasil = angka1 / angka2;
                } else {
                    cout << "Error: Tidak bisa melakukan pembagian dengan nol." << endl;
                    hasil = angka1; 
                }
                break;
            default:
                cout << "Operasi tidak valid." << endl;
                hasil = angka1; 
                break;
        }

        cout << "Hasil: " << hasil << endl;

        cout << "Apakah Anda ingin melanjutkan (y/n)? ";
        cin >> lanjut;

        if (lanjut == 'y' || lanjut == 'Y') {
            gunakanHasilTerakhir = true; 
        } else {
            gunakanHasilTerakhir = false; 
        }
    } while (lanjut == 'y' || lanjut == 'Y');

    return 0;
}
