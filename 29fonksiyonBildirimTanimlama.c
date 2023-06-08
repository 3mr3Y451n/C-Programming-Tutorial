#include <stdio.h>
// Fonksiyonu bildirelim
int intTopla(int, int);

int main() {

/*
Bir fonksiyon iki bölümden oluşur:

-Bildirim: işlevin adı, dönüş türü ve parametreleri (varsa)
-Tanım: fonksiyonun gövdesi (yürütülecek kod)
*/

//Kod optimizasyonu için, bildirimi ve fonksiyonun tanımını ayırmanız önerilir.

int sonuc = intTopla(5, 3); // fonksiyonu çağıralım
printf("Sonuç = %d", sonuc);

    return 0;
}

// Fonksiyonu tanımlayalım
int intTopla(int x, int y) {
  return x + y;
}
