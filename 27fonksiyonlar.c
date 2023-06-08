#include <stdio.h>
void myFunction() {
  printf("Fonksiyon çağırıldı!\n");
}

int main() {
/*

Fonksiyonlar, yalnızca çağrıldığında çalışan bir kod bloklarıdır.
Fonksiyonlar, belirli eylemleri gerçekleştirmek için kullanılır ve
kodu yeniden kullanmak için önemlidir:
Kodu bir kez tanımlanır ve birçok kez kullanılabilir.

main() ve printf() birer fonksiyondur.

*/

// Fonksiyon main metodunun yukarısında tanımlandı.

// Fonksiyonu çağıralım.
myFunction();
// Çıktı: "Fonksiyon çağırıldı!"
printf("\n");
// Bir fonksiyon birden çok kez çağrılabilir.
myFunction();
myFunction();
myFunction();

// Fonksiyon çağırıldı!
// Fonksiyon çağırıldı!
// Fonksiyon çağırıldı!

    return 0;
}
