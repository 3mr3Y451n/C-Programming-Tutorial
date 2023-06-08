#include <stdio.h>

int main(){

/*

dosyadan okumak için, fopen() fonksiyonu içinde r modunu kullanırız.

*/

FILE *fptr;

// Open a file in read mode
fptr = fopen("filename.txt", "r");

// bu, dosyayaı okumak üzere açacaktır.

/*
Ardından, dosyanın içeriğini depolamak için yeterince büyük olması gereken bir dize oluşturmamız gerekiyor.
Örneğin, en fazla 100 karakter saklayabilen bir dizi oluşturalım
*/

// Store the content of the file
char myString[100];

/*
İçeriği okumak için fgets() fonksiyonunu kullanabiliriz.
fgets() üç parametre alır:
*/

/*
İlk parametre, yeni oluşturduğumuz myString dizide olacak olan dosya içeriğinin nerede saklanacağını belirtir .
İkinci parametre, boyutuyla eşleşmesi gereken, okunacak maksimum veri boyutunu belirtir myString (100).
Üçüncü parametre, dosyayı okumak için kullanılan bir dosya işaretçisi gerektirir (bu örnekte: fptr).
*/

// Read the content and print it
while(fgets(myString, 100, fptr)) {
  printf("%s", myString);
}

fclose(fptr);

//İyi Pratik

//Var olmayan bir dosyayı okumak için açmaya çalışırsanız, fopen() fonksiyonu NULL döndürür.

/*
iyi pratik olarak, if ile sonucun NULL olup olmadığı sorgulanıp,
dosya yok ise bir metin çıktısı verilebilir.
*/

FILE *isaretci;

// Open a file in read mode
isaretci = fopen("loremipsum.txt", "r");

// Print some text if the file does not exist
if(isaretci == NULL) {
  printf("Dosya mevcut değil!.");
}

// Close the file
fclose(isaretci);

return 0;
}

/*
With this in mind, we can create a more sustainable code if we use our "read a file" example above again:

Example
If the file exist, read the content and print it. If the file does not exist, print a message:

FILE *fptr;

// Open a file in read mode
fptr = fopen("filename.txt", "r");

// Store the content of the file
char myString[100];

// If the file exist
if(fptr != NULL) {

  // Read the content and print it
  while(fgets(myString, 100, fptr)) {
    printf("%s", myString);
  }

// If the file does not exist
} else {
  printf("Not able to open the file.");
}

// Close the file
fclose(fptr);

Çıktı:
Hello World!
Hi everybody!

*/
