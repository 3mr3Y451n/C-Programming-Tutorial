#include <stdio.h>

int main(){

/* W modu ile bir dosya oluşturalım (dosya varsa açılacak yoksa oluşturulacaktır).
W modu dosyanın yazılmak üzere açıldığı anlamına gelir.
içerik eklemek için fprint() fonksiyonu ve
dosya açılırken belirtilen işaretçi kullanılır.

*/

FILE *fptr;

// Open a file in writing mode
fptr = fopen("filename.txt", "w");

// Write some text to the file
fprintf(fptr, "Some text");

// Close the file
fclose(fptr);

/*
Halihazırda var olan bir dosyaya yazarsanız,
eski içerik silinir ve yeni içerik eklenir.
Mevcut içeriği yanlışlıkla silebileceğiniz için bu nokta önemlidir.

aynı doya aşağıdaki şekilde açıldıktan sonra kapanırsa;
fprintf(fptr, "Hello World!");
Some Text silinir.
Artık Hello World! yazar.
*/

// Dosyaya İçerik Ekleme

/*
Bir dosyaya eski içeriği silmeden içerik eklemek istiyorsanız a modu kullanabilirsiniz.
a modu, içeriği dosyanın sonuna ekler.
*/

// Open a file in append mode
fptr = fopen("filename.txt", "a");

// Append some text to the file
fprintf(fptr, "\nHi everybody!");

// Close the file
fclose(fptr);

// w modda olduğu gibi dosya yoksa a modu, dosyayı oluşturacaktır.

return 0;
}
