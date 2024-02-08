// 12SS23009 - DINA SIAGIAN

#include <stdio.h>

int main(int _argc, char **_argv)
{

  int jumlahBaris, n, terbesar, terkecil;

    // Meminta pengguna memasukkan jumlah elemen array
    scanf("%d", &jumlahBaris);

    int array[jumlahBaris];

    // Meminta pengguna memasukkan elemen-elemen array
    for (n = 0; n < jumlahBaris; n++) {
        scanf("%d", &array[n]);
    }

    // Menginisialisasi terbesar dan terkecil dengan elemen pertama array
    terbesar = terkecil = array[0];

    // Mencari nilai terbesar dan terkecil dari array
    for (n = 1; n < jumlahBaris; n++) {
        if (array[n] > terbesar) {
            terbesar = array[n];
        } 
        else if (array[n] < terkecil) {
            terkecil = array[n];
        }
    }

    // Menampilkan nilai terkecil dan terbesar
    printf("%d\n", terkecil);
    printf("%d\n", terbesar);

    return 0;

}