#include <stdio.h>

int main() {
/*
Diziler,
her değer için ayrı değişkenler bildirmek yerine
birden çok değeri tek bir değişkende depolamak için kullanılır.

Bir dizi oluşturmak için,
veri türünü (int vb.) tanımlayın ve
dizinin adını sonra köşeli parantez [] ile belirtilir.

Buna değerler eklemek için
süslü parantez içinde
virgülle ayrılmış bir liste kullanılır.
*/

int myNumbers[] = {25, 50, 75, 100};

//dizideki bir öğeye erişme

/*Dizi dizinleri 0 ile başlar.
[0] ilk öğedir
[1] ikinci öğedir, vb.
*/

printf("%d\n", myNumbers[0]); // Outputs 25

//dizinin bir öğesini değiştirme

myNumbers[0] = 33;
printf("%d\n", myNumbers[0]); // Now outputs 33 instead of 25

//for döngüsü yardımıyla dizi içinde gezme
int i;
for (i = 0; i < 4; i++) {
  printf("%d\n", myNumbers[i]);
}

//dizi boyutunu ayarlama

int rakamlar[4]; // Declare an array of four integers:

// Add elements
rakamlar[0] = 25;
rakamlar[1] = 50;
rakamlar[2] = 75;
rakamlar[3] = 100;

//Oluşturduktan sonra dizinin boyutunu değiştiremezsiniz.
    return 0;
}

