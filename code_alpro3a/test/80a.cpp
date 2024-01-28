#include <iostream>

using namespace std;

int main() {
    int pilihan;

    cout << "=======================" << endl;
    cout << "##  MENU UJIAN - 80  ##" << endl;
    cout << "=======================" << endl;
    cout << "Pilihan Menu: " << endl;
    cout << "1. Grade Nilai" << endl;
    cout << "2. Bilangan ganjil genap" << endl;
    cout << "3. Keluar" << endl;

    cout << "Pilih menu (1-3): ";
    cin >> pilihan;

    switch(pilihan) {
        case 1: {
            string nama;
            int npm, uts, uas, nilai_total;
            char grade;

            cout << "=================" << endl;
            cout << "   GRADE NILAI   " << endl;
            cout << "=================" << endl;
            cout << "Masukkan Nama: ";
            cin >> nama;
            cout << "Masukkan NPM: ";
            cin >> npm;
            cout << "Masukkan nilai uts: ";
            cin >> uts;
            cout << "Masukkan nilai uas: ";
            cin >> uas;

            nilai_total = 0.5 * uts + 0.5 * uas;

            if (nilai_total >= 90 && nilai_total < 100) {
                grade = 'A';
            } else if (nilai_total >= 80 && nilai_total <= 89) {
                grade = 'B';
            } else if (nilai_total >= 70 && nilai_total <= 79) {
                grade = 'C';
            } else if (nilai_total >= 60 && nilai_total <= 69) {
                grade = 'D';
            } else {
                grade = 'E';
            }
            
            cout << "=================" << endl;
            cout << "   GRADE NILAI   " << endl;
            cout << "=================" << endl;
            cout << "Nama   : " << nama << endl;
            cout << "NPM   : " << npm << endl;
            cout << "Nilai grade   : " << grade << endl;
        }
        break;
        
        case 2: {
            int bil;
            cout << "\n====BIL GANJIL GENAP====" << endl;
            cout << "Masukkan sebuah bilangan: ";
            cin >> bil;

            if(bil %2==0){
                cout << bil << " adalah bilangan genap" << endl;
            } else {
                cout << bil << " adalah bilangan ganjil" << endl;
            }
        }
        break;

        case 3: {
            cout << "Keluar dari program." << endl;
        }
        break;

        default:
        cout << "Pilihan menu tidak valid" << endl;
    }
    return 0;
}
