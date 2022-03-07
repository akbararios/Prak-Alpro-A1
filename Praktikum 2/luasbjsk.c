/*Nama File	: luasbjsk.c*/
/*Deskripsi	: menghitung dan menampilkan luas bujur sangkar l dilayar*/
/*Pembuat	: Akbar Ario Satrio Utomo - 24060121140123*/
/*Tgl pembuatan	: Minggu, 6-3-2022 22:14 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Kamus*/
    float s;
    float l;

/*Algoritma*/
    printf("Masukkan sisi:");
    scanf("%f", &s);
    l = s*s;

    printf("Luas Bujur Sangkar = %.2f", l);

    return 0;
}
