/*Nama File	: cekprima.c*/
/*Deskripsi	: mengecek sebuah bilangan adalah bil prima atau bukan*/
/*Pembuat	: Akbar Ario Satrio Utomo - 24060121140123*/
/*Tgl pembuatan	: Senin, 21-3-2022 21:29 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Kamus*/
    int N,i,c;

    /*Algoritma*/
    printf("Masukkan bilangan positif sembarang:");
    scanf("%d", &N);

    if (!(N>0)) {
        printf("Input harus positif");
    }
    else {
        i = 2;
        c = 1;
        while (i <= N/2) {
            if (N % i==0) {
                c=0;
                break;
            }
        i++;
        }
        if (c==0){
            printf("%d adalah bukan bilangan prima\n", N);
        }
        else {
            printf("%d adalah bilangan prima\n", N);
        }
    }
    return 0;
}

