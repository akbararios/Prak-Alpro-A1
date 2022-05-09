/*Nama File	: insertionsort.c*/
/*Deskripsi	: mengurut input array yang dimasukkan*/
/*Pembuat	: Akbar Ario Satrio Utomo - 24060121140123*/
/*Tgl pembuatan	: Senin, 8-5-2022 23: WIB*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, *arr, i, j, tmp;

  printf("Masukkan jumlah isi array: ");
  scanf("%d", &n);
  arr = (int*) malloc(n * sizeof(int));

  for(i = 0; i < n; i++){
    printf("Masukkan Isi Array Ke-%d: ", i+1);
    scanf("%d", &arr[i]);
  }

  for (i = 1; i <= n; i++){
    j = i;
    while(j > 0 && arr[j-1] > arr[j]){
      tmp = arr[j];
      arr[j] = arr[j-1];
      arr[j-1] = tmp;

      j--;
    }
  }

  printf("Hasil sorting sebagai berikut:\n");

  for (i = 0; i <= n-1; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
