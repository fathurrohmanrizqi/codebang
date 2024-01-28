#include <iostream>
using namespace std;

int main(){
	double angka1, angka2, total;
	string operatorArit;
	
	cout << "Masukkan operator (+,-,*,/): "<<endl;
	getline(cin,operatorArit);
	cout << "Masukkan dua angka: " << endl;
	cin >> angka1;
	cin >> angka2;
	
	if (operatorArit == "+"){
		total = angka1 + angka2;
		cout << "Hasil Perhitungan: " << total <<endl;
	} else if (operatorArit == "-"){
		total = angka1 - angka2;
		cout << "Hasil perhitungan: " << total << endl;
	} else if (operatorArit == "*"){
		total = angka1 * angka2;
		cout << "Hasil perhitungan: " << total << endl;
	} else if (operatorArit == "/"){
		total = angka1 / angka2;
		cout << "Hasil perhitungan" << total << endl;
	} else {
		cout << "Operator tidak ada!" << endl;
		return 0;
	}
	
	cout << "Hasil Perhitungan: " << angka1 << " " << operatorArit << " " << angka2 << "= " << total;
	return 0;
}
