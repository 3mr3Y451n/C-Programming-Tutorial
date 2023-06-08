#include <stdio.h>
void selamlama(char ad[]) {
  printf("Merhaba %s\n", ad);
}

void diziFonk(int rakam[5]) {
  for (int i = 0; i < 5; i++) {
    printf("%d\n", rakam[i]);
  }
}

int ekle5(int x) {
  return 5 + x;
}

int intTopla(int x, int y) {
  return x + y;
}

int main() {
/*

Fonksiyonlara bilgiyi parametreler aracılığı ile göndeririz.
Parametreler fonksiyon içinde değişkenler olarak iş görürler.
Fonksiyon adından sonra parantez içinde belirtilirler.
İstenilen sayıda parametre kullanılabilir.
Her bir parametre arasına virgül koyulmalıdır.

dönüşTipi fonksiyonAdi(parametre1, parametre2, ....., parametren){
çalıştırılacak komutlar;
}

*/

selamlama("Ömer");
selamlama("Kaan");
selamlama("Kerem");
selamlama("Sait");

/*
İşleve bir parametre iletildiğinde buna argüman denir.
Bu nedenle, yukarıdaki örnekte: ad bir parametre iken,
Ömer, Kaan, Kerem ve Sait argümandır.
*/

/*
Çıktı:
Merhaba Ömer
Merhaba Kaan
Merhaba Kerem
Merhaba Sait
*/
printf("\n");

// Diziler, bir fonksiyona argüman olarak gönderilebilir.

int rakam[5] = {10, 20, 30, 40, 50};
diziFonk(rakam);

printf("\n");

//Dönüş Değerleri

/*
void fonksiyonlar geriye bir değer döndürmez.
Fonksiyonun geriye bir değer döndürmesi isteniyorsa,
void yerine int veya float gibi dönüş tipi ve
fonksiyon içinde return anahtar kelimesi kullanılmalıdır.
*/

// ekle5 fonksiyonu yukarıda tanımlandı ve int değer döndürmektedir.

printf("Sonuç: %d", ekle5(3));
printf("\n");

// aşağıda, iki int parametrenin toplamını yine int değer döndüren fonksiyon örneği bulunmaktadır.

printf("Sonuç: %d", intTopla(5, 3));
printf("\n");

//Fonksiyondan dönen değer bir değişkene atanabilir.

int sonuc = intTopla(5, 3);
  printf("Sonuç = %d", sonuc);
    return 0;
}
