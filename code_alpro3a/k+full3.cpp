#include <iostream>
#include <fstream>

using namespace std;
int main() {

    char nameFile[100];
    cout << "Masukkan nama file: ";
    cin >> nameFile;


    ofstream fileOutput(nameFile);

    if (!fileOutput.is_open()) {
        cout << "Gagal membuka file untuk penulisan" << endl;
        return 1;
    }


    char isi[100];
    cout << "Masukkan konten: ";
    cin >> isi;
    fileOutput << isi << endl;

    fileOutput.close();

    ifstream fileInput(nameFile);

    if (!fileInput.is_open()) {
        cout << "Gagal membuka file untuk membaca." << endl;
        return 1;
    }

    cout << "Isi file:" << endl;
    string line;
    while (getline(fileInput, line)) {
        cout << line << endl;
    }

    fileInput.close();

    return 0;
}

