/*Nama File	: bubblesort.c*/
/*Deskripsi	: sub-program bubble sort untuk membuat sorted array dari input array yang dimasukkan*/
/*Pembuat	: Akbar Ario Satrio Utomo - 24060121140123*/
/*Tgl pembuatan	: Senin, 8-5-2022 23: WIB*/

#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n) {
    /*Kamus Lokal*/
    int i, j, temp;

    /*Algoritma*/
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    /*Kamus*/
    int i, n, *arr;

    /*Algoritma*/
    printf("Masukkan Jumlah Isi Array: ");
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));
    for(i=0;i<n;i++){
        printf("Masukkan Isi Array Ke-%d: ", i+1);
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);
    printf("Hasil Sorted array: \n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
