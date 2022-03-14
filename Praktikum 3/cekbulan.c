/*Nama File	: cekbulan.c*/
/*Deskripsi	: menampilkan bulan berdasarkan input*/
/*Pembuat	: Akbar Ario Satrio Utomo - 24060121140123*/
/*Tgl pembuatan	: Minggu, 14-3-2022 20:00 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Kamus*/
    int n;

    /*Algoritma*/
    printf("Masukkan bilangan antara 1-12:");
    scanf("%d", &n);

    switch (n) {
        case 1:
            printf("Bulan Januari");
            break;
        case 2:
            printf("Bulan Februari");
            break;
        case 3:
            printf("Bulan Maret");
            break;
        case 4:
            printf("Bulan April");
            break;
        case 5:
            printf("Bulan Mei");
            break;
        case 6:
            printf("Bulan Juli");
            break;
        case 7:
            printf("Bulan Juni");
            break;
        case 8:
            printf("Bulan Agustus");
            break;
        case 9:
            printf("Bulan September");
            break;
        case 10:
            printf("Bulan Oktober");
            break;
        case 11:
            printf("Bulan November");
            break;
        case 12:
            printf("Bulan Desember");
            break;
        default:
            printf("Masukan bukan angka diantara 1-7");
    }
}

