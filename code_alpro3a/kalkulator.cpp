#include <iostream>

using namespace std;
int main(){
	int num1, num2, tambah, kurang, kali;
	float bagi;
	
	cout<<"-----------------------------"<<endl;
	cout<<"     PROGRAM KALKULATOR  	"<<endl;
	cout<<"-----------------------------"<<endl;
	cout<<"Masukkan nilai A: ";
	cin>>num1;
	cout<<"Masukkan nilai B: ";
	cin>>num2;
	
	tambah = num1 + num2;
	kurang = num1 - num2;
	kali = num1 * num2;
	bagi = static_cast<float>(num1) / num2;
	
	cout<<"-----------------------------"<<endl;
	cout<<"     HASIL PERHITUNGAN   	"<<endl;
	cout<<"-----------------------------"<<endl;
	cout<<num1<<" + "<<num2<<" = "<<tambah<<endl;
	cout<<num1<<" - "<<num2<<" = "<<kurang<<endl;
	cout<<num1<<" * "<<num2<<" = "<<kali<<endl;
	cout<<num1<<" : "<<num2<<" = "<<bagi<<endl;
	cout<<endl;
}
