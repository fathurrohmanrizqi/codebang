#include <stdlib.h>
#include <iostream>
using namespace std;

int main() {
    char ulang;
    do {
        int pilihan;
        
        cout << "============================" << endl;
        cout << "##     MENU UJIAN 100     ##" << endl;
        cout << "============================" << endl;
        cout << "1. Pointer" << endl;
        cout << "2. Segitiga Number" << endl;
        cout << "3. Nilai Maksimum Minimum" << endl;
        cout << endl;
        
        cout << "Pilihan anda: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
            	cout << "============================" << endl;
                cout << "##     Program Pointer    ##" << endl;
                cout << "============================" << endl;
                int var;
                int *ptr;

                cout << "Masukkan Nilai Bilangan: ";
                cin >> var;
                cout << endl;

                ptr = &var;

                cout << "Nilai dari var: " << var << endl;
                cout << "Alamat dari var: " << &var << endl;
                cout << endl;
                cout << "Nilai yang ditunjuk oleh ptr: " << *ptr << endl;
                cout << "Alamat yang disimpan dalam ptr: " << ptr << endl;
                break;
            }

            case 2: {
            	cout << "==================================" << endl;
	            cout << "##     Program C++ Segitiga     ##" << endl;
	            cout << "==================================" << endl;
	            cout << endl;
	
	            int tinggi, i, j;
	            cout << "Masukkan Tinggi Segitiga: ";
	            cin >> tinggi;
	            cout << endl;
	            int k = 0;
	
	            // Lengkapi looping segitiga berikut
	            for (int i = 1; i <= tinggi; i++)
	            {
	            	k++;
	                // Determine whether to increment or decrement in the inner loop
					for (int j = 1; j <= k ; j++)
	                {
	                    cout << "*" << " ";
	                }
	                cout << endl;
	        	}
	        	for (int i = tinggi-1; i>=0 ; i--) {
	                for (int j = 1; j <= i; j++) {
	            		cout << "*" << " ";
	        		}
	            	cout << endl;
	        	}
            }
            break;

            case 3: {
            	cout << "==================================" << endl;
                cout << "Program C++ Nilai Maksimum Minimum" << endl;
                cout << "==================================" << endl;
                int n, max, min;
                int arr[n];
                
                cout << "Masukkan jumlah elemen array: ";
                cin >> n;
                cout << endl;

			    for (int i = 0; i < n; i++) {
			        cout << "Masukkan elemen array: ";
			        cin >> arr[i];
			    }
			    
			    max = arr[0];
			    min = arr[0];
			    
			    for (int i = 0; i < n; i++) {
			        if (max < arr[i]) {
			            max = arr[i];
			        }
			        if (min > arr[i]) {
			            min = arr[i];
			        }
			    }
			    
			    cout << endl;
			    cout << "Nilai maksimum adalah: " << max << endl;
			    cout << "Nilai minimum adalah: " << min << endl;
            }
            break;
        default:
                cout << "Menu tidak tersedia" << endl;
        }
        cout << endl;

        cout << "Ingin memilih menu lain (y/t)? ";
        cin >> ulang;
        cout << endl;
	} while (ulang == 'y' || ulang == 'Y');

    cout << "Terimakasih" << endl;
    return 0;
}

