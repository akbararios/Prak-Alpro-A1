/*Nama File	: countingsort.c*/
/*Deskripsi	: membuat sub-program counting sort untuk mengurut input array yang dimasukkan*/
/*Pembuat	: Akbar Ario Satrio Utomo - 24060121140123*/
/*Tgl pembuatan	: Senin, 8-5-2022 23: WIB*/

#include <stdio.h>
#include <stdlib.h>

void counting_sort(int arr1[],int n,int max, int min){
    /*Kamus Lokal*/
    int count[50]={0},i,j;

    /*Algoritma*/
    for(i=0;i<n;++i)
        count[arr1[i]-min]=count[arr1[i]-min]+1;
    for(i=0;i<=max-min;++i)
        for(j=1;j<=count[i];++j)
            printf("%d ",i+min);
}

int main(){

    /*Kamus*/
    int i, n, *arr, max=0, min=0;

    /*Algoritma*/
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    printf("Array sebelum disorting: ");
    for(i = 0; i < n; i++){
        if(arr[i]>max)
            max=arr[i];
        (arr[i]<min)? min=arr[i] : min;
        printf("%d  ", arr[i]);
    }
    printf("\nNilai Max: %d\n", max);

    printf("\nHasil sorting sebagai berikut:\n ");
    counting_sort(arr,n,max, min);
    return 0;
}
