#include <stdio.h>
#include <conio.h>
#define max 5

typedef struct {
    int top;
    int data[max + 1];
} stack;
stack tumpukan;

void createEmpty() {
    tumpukan.top = 0;
}

void push(int x) {
    tumpukan.top = tumpukan.top + 1;
    tumpukan.data[tumpukan.top] = x;
}

void pop() {
    tumpukan.top = tumpukan.top - 1;
}

int IsEmpty() {
    if (tumpukan.top == 0)
        return 1;
    else
        return 0;
}

int IsFull() {
    if (tumpukan.top == max)
        return 1;
    else
        return 0;
}

int main() {
    int input, pilih;

    createEmpty();
    pilih = 0;

    while (pilih != 5) {
        puts("_________________________");
        printf("             MENU UTAMA\n");
        puts("_________________________");
        puts("1: Cek kondisi Stack");
        puts("2: Tambah data (Push)");
        puts("3: Keluarkan isi stack (Pop)");
        puts("4: Kosongkan Stack");
        puts("5: Keluar");
        printf("Pilihan Anda: ");
        scanf("%d", &pilih);

        switch (pilih) {
        case 1:
            if (IsEmpty() == 1)
                puts("Stack masih kosong");
            else if ((IsEmpty() == 0) && (IsFull() == 0))
                puts("Stack sudah terisi (belum penuh)");
            else
                puts("Stack sudah penuh");
            break;
        case 2:
            if (IsFull() == 1)
                puts("Stack Penuh");
            else {
                printf("Masukkan data: ");
                scanf("%d", &input);
                push(input);
                printf("Top baru: %d\n", tumpukan.data[tumpukan.top]);
                printf("IsFull: %d\n", IsFull());
                printf("IsEmpty: %d\n", IsEmpty());
            }
            break;
        case 3:
            if (IsEmpty() == 1)
                puts("Stack masih kosong");
            else {
                printf("Top yang dikeluarkan bernilai: %d\n", tumpukan.data[tumpukan.top]);
                pop();
            }
            break;

        case 4:
            while (IsEmpty() == 0) {
                printf("Top yang dikeluarkan bernilai %d\n", tumpukan.data[tumpukan.top]);
                pop();
            }
            puts("Stack sudah kosong");
            break;
        case 5:
            puts("---- Terima Kasih ----");
            break;
        }
    }
}
