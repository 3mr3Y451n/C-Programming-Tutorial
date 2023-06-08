#include <stdio.h>
//Fonksiyonu bildirelim
int ozTopla(int k);

int main() {

/*

Özyineleme, çağırılan bir fonsiyonun, kendisini çağırması tekniğidir.
Karmaşık problemleridaha kolay çözmenin bir yoludur.
Özyinelemeyi anlamak zor olabileceğinden,
nasıl çalıştığını anlamanın en iyi yolu onunla deney yapmaktır.

*/

/*
ikiyayıyı eklemek kolay bir işlemken
bir diziyi ardışık toplamak biraz karmaşıktır.
Özyineleme ile bir diziyi toplamak için görevi,
iki sayıyı toplama görevine indirgiyoruz.
*/

int sonuc = ozTopla(10);
printf("Özyineleme Fonksiyonunun sonucu: %d", sonuc);
    return 0;
}

// 1'den verilen parametreye kadar olan rakamları toplayan fonksiyon yazıyoruz.
int ozTopla(int k) {
  if (k > 0) {
    return k + ozTopla(k - 1); // fonksiyon burada kendini çağırıyor.
  } else {
    return 0;
  }
}
/*10 + toplam(9)
10 + ( 9 + toplam(8) )
10 + ( 9 + ( 8 + toplam(7) ) )
...
10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + toplam(0)
10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0
*/

/*
k değeri 1 iken fonksiyon kendini 1 argümanı ile çağırır.
if bloğuna 0 değeri ile girmez.
Else bloğunda fonksiyon kendini tekrar çağırmadan 0 döner.
*/
