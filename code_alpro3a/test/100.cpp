#include <iostream>
using namespace std;

int main()
{
    int pilihan;
    char ulang = 'y';

    do
    {
        cout << "============================" << endl;
        cout << "##      MENU UJIAN 100    ##" << endl;
        cout << "============================" << endl;
        cout << "1. Segitiga Terbalik" << endl;
        cout << "2. Menulis File" << endl;
        cout << "3. Membaca File" << endl;
        cout << endl;

        cout << "Pilihan anda: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
        {
            cout << "==================================" << endl;
            cout << "## Program C++ Segitiga Bintang ##" << endl;
            cout << "==================================" << endl;
            cout << endl;

            int tinggi, i, j;
            cout << "Masukkan Tinggi Segitiga: ";
            cin >> tinggi;
            cout << endl;

            // Lengkapi looping segitiga berikut
            for (int i = 1; i <= tinggi * 2 - 1; i++)
            {
                // Determine whether to increment or decrement in the inner loop
                int limit = (i <= tinggi) ? i : tinggi * 2 - i;

                for (int j = 1; j <= limit; j++)
                {
                    cout << j << " ";
                }
                cout << endl;
            }
        }
        break;

        case 2:
        {
            char data[50];
            int i = 0;
            FILE *fp;

            // Lengkapi perintah operasi file di bawah ini
            fp = fopen("data.txt", "w");

            for (int i = 0; i < 5; i++)
            {
                printf("Masukkan Data ke - %d: ", i + 1);
                cin >> data;
                fprintf(fp, "%s\n", data);
            }

            // Menutup file
            fclose(fp);

            cout << "\n\nData berhasil ditulis" << endl;
        }
        break;

        case 3:
        {
            char data[50];
            int i = 0;
            FILE *fp;

            // Lengkapi perintah operasi file di bawah ini
            fp = fopen("data.txt", "r");

            while (fgets(data, 50, fp) != NULL)
            {
                printf("Data ke - %d : %s", i, data);
                i++;
            }

            // Menutup file
            fclose(fp);

            printf("\n\nData berhasil dibaca");
        }
        break;

        default:
            cout << "Menu tidak tersedia" << endl;
        }

        cout << "Ingin memilih menu lain (y/t)? ";
        cin >> ulang;
        cout << endl;
    } while (ulang == 'y' || ulang == 'y');

    cout << "Terimakasih" << endl;
    return 0;
}
