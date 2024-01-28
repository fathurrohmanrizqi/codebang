#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Membuka file untuk penulisan (output)
    std::ofstream fileOutput("example.txt");

    // Memeriksa apakah file berhasil dibuka
    if (!fileOutput.is_open()) {
        std::cout << "Gagal membuka file untuk penulisan." << std::endl;
        return 1;
    }

    // Menulis ke file
    fileOutput << "Hello, ini adalah contoh penulisan ke file." << std::endl;
    fileOutput << "Baris kedua dari program C++." << std::endl;

    // Menutup file
    fileOutput.close();

    // Membuka file untuk membaca (input)
    std::ifstream fileInput("example.txt");

    // Memeriksa apakah file berhasil dibuka
    if (!fileInput.is_open()) {
        std::cout << "Gagal membuka file untuk membaca." << std::endl;
        return 1;
    }

    // Membaca isi file
    std::cout << "Isi file:" << std::endl;
    std::string line;
    while (std::getline(fileInput, line)) {
        std::cout << line << std::endl;
    }

    // Menutup file
    fileInput.close();

    return 0;
}
