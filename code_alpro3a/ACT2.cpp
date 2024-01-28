#include <iostream>

using namespace std;
int main() {
    char operators;
    double num1, num2;
    double result;

    cout << "Masukkan operator (+, -, *, /): ";
    cin >> operators;

    cout << "Masukkan dua angka: ";
    cin >> num1;
    cin >> num2;

    switch (operators) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                cerr << "Error, Angka kedua tidak boleh 0";
                return 0;
            }

            result = num1 / num2;
            break;
        default:
            cout  << "Operator tidak ada";
            return 0;
    }

    cout << "Hasil perhitugan: " << num1 << " " << operators << " " << num2 << " = " << result;

    return 0;
}
