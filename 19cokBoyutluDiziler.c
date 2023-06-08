#include <stdio.h>

int main() {
/*
Çok boyutlu bir dizi temel olarak bir diziler dizisidir.
Dizilerin herhangi bir sayıda boyutu olabilir.
*/
//  İki Boyutlu Diziler
int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

/*
İki boyutlu bir dizinin bir öğesine erişmek için
hem satırın hem de sütunun dizin numarasını belirtmeniz gerekir.
*/
printf("%d\n", matrix[0][2]);  // Outputs 2

/*
Bir öğenin değerini değiştirmek için
boyutların her birinde öğenin indeks numarası girilir.
*/
matrix[0][0] = 9;
printf("%d\n\n", matrix[0][0]);  // Now outputs 9 instead of 1

/*
Çok boyutlu bir dizide döngü yapmak için
dizinin boyutlarının her biri için
bir döngüye ihtiyacınız vardır.
*/

int i, j;
for (i = 0; i < 2; i++) {
  for (j = 0; j < 3; j++) {
    printf("%d\n", matrix[i][j]);
  }
}

    return 0;
}
