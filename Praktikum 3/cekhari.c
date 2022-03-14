/*Nama File	: cekhari.c*/
/*Deskripsi	: menampilkan hari berdasarkan input*/
/*Pembuat	: Akbar Ario Satrio Utomo - 24060121140123*/
/*Tgl pembuatan	: Minggu, 14-3-2022 19:50 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Kamus*/
    int n;

    /*Algoritma*/
    printf("Masukkan bilangan antara 1-7:");
    scanf("%d", &n);

    switch (n) {
        case 1:
            printf("Hari Senin");
            break;
        case 2:
            printf("Hari Selasa");
            break;
        case 3:
            printf("Hari Rabu");
            break;
        case 4:
            printf("Hari Kamis");
            break;
        case 5:
            printf("Hari Jum'at");
            break;
        case 6:
            printf("Hari Sabtu");
            break;
        case 7:
            printf("Hari Minggu");
            break;
        default:
            printf("Masukan bukan angka diantara 1-7");
    }
}
