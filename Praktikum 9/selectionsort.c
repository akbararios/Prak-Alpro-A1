/*Nama File	: insertionsort.c*/
/*Deskripsi	: mengurut input array yang dimasukkan*/
/*Pembuat	: Akbar Ario Satrio Utomo - 24060121140123*/
/*Tgl pembuatan	: Senin, 8-5-2022 23: WIB*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, temp, *arr, n;

    printf("Masukkan jumlah isi array: ");
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));

    for(i = 0; i < n; i++){
        printf("Masukkan Isi Array Ke-%d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]< arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }


    printf("Hasil sorting sebagai berikut:\n");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}
