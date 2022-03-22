/*Nama File	: faktorbil.c*/
/*Deskripsi	: mencari dan menampilkan faktor dari sebuah bilangan*/
/*Pembuat	: Akbar Ario Satrio Utomo - 24060121140123*/
/*Tgl pembuatan	: Senin, 21-3-2022 20:00 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Kamus*/
    int N;
    int i;

    /*Algoritma*/
    printf("Masukkan bilangan positif sembarang: ");
    scanf("%d", &N);

    if (!(N>0)) {
        printf("Input harus positif");
    }
    else {
        printf("Faktor bilangannya adalah:\n");
        i = 1;
        while (i <= N) {
            if (N % i==0) {
                printf("%d  ", i);
            }
        i++;
        }
    }
    return 0;
}

