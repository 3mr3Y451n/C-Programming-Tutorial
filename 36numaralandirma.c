#include <stdio.h>

int main() {

/*

C Numaralandırma (enum)
C Numaraları
Enum , bir grup sabiti (değiştirilemez değerler) temsil eden özel bir türdür.

Bir sıralama oluşturmak için, enumanahtar kelimeyi ve ardından numaralandırmanın adını kullanın ve numaralandırma öğelerini virgülle ayırın:

enum Level {
  LOW,
  MEDIUM,
  HIGH
};
Son öğenin virgül gerektirmediğini unutmayın.

Büyük harf kullanmak zorunlu değildir, ancak genellikle iyi bir uygulama olarak kabul edilir.

Enum, "özel olarak listelenmiş" anlamına gelen "numaralandırmalar"ın kısaltmasıdır.

Numaralandırmaya erişmek için, onun bir değişkenini oluşturmanız gerekir.

Yöntemin içinde , anahtar sözcüğü, ardından enum adını ( ) ve ardından enum değişkeninin adını ( bu örnekte) main()belirtin :enumLevelmyVar

enum Level myVar;
Artık bir enum değişkeni ( ) oluşturduğunuza göre myVar, ona bir değer atayabilirsiniz.

LOWAtanan değer, enum ( , MEDIUMveya HIGH) içindeki öğelerden biri olmalıdır :

enum Level myVar = MEDIUM;
Varsayılan olarak, ilk öğenin ( LOW) değeri vardır 0, ikinci öğenin ( MEDIUM) değeri 1vb.

Şimdi myVar'ı yazdırmayı denerseniz, 1şunu temsil eden bir çıktı verir MEDIUM:

int main() {
  // Create an enum variable and assign a value to it
  enum Level myVar = MEDIUM;

  // Print the enum variable
  printf("%d", myVar);

  return 0;
}
Değişim değerleri
Bildiğiniz gibi, bir numaralandırmanın ilk öğesinin değeri 0'dır. İkincisinin değeri 1'dir ve böyle devam eder.

Değerleri daha anlamlı hale getirmek için bunları kolayca değiştirebilirsiniz:

enum Level {
  LOW = 25,
  MEDIUM = 50,
  HIGH = 75
};
printf("%d", myVar); // Now outputs 50
Belirli bir öğeye bir değer atarsanız sonraki öğelerin numaralarını buna göre güncelleyeceğini unutmayın:

enum Level {
  LOW = 5,
  MEDIUM, // Now 6
  HIGH // Now 7
};
Switch Bildiriminde Enum
Numaralandırmalar, karşılık gelen değerleri kontrol etmek için genellikle switch deyimlerinde kullanılır:

enum Level {
  LOW = 1,
  MEDIUM,
  HIGH
};

int main() {
  enum Level myVar = MEDIUM;

  switch (myVar) {
    case 1:
      printf("Low Level");
      break;
    case 2:
      printf("Medium level");
      break;
    case 3:
      printf("High level");
      break;
  }
  return 0;
}
Enums Neden ve Ne Zaman Kullanılır?
Numaralandırmalar, kodun okunmasını ve bakımını kolaylaştıran sabitlere ad vermek için kullanılır.

Ay günleri, günler, renkler, kart destesi gibi değişmeyeceğini bildiğiniz değerleriniz olduğunda numaralandırmaları kullanın.

*/
    return 0;
}
