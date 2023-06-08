#include <stdio.h>
int main() {

/*

Bellek Adresi

C'de bir değişken oluşturulduğunda, değişkene bir bellek adresi atanır.
Bellek adresi, değişkenin bilgisayarda depolandığı konumdur.
Değişkene bir değer atadığımızda bu hafıza adresinde saklanır.
Erişmek için referans operatörünü ( &) kullanın ve sonuç, değişkenin nerede saklandığını gösterir:

*/

int myAge = 43;
printf("%p", &myAge); // çıktı 0x7ffe5367e044 gibi bir bellek adresini gösterecektir.

/*

&myAge genellikle "işaretçi" olarak adlandırılır.
Bir işaretçi temel olarak bir değişkenin bellek adresini değeri olarak saklar.
İşaretçi değerlerini yazdırmak için %p biçim belirticisini kullanılır.

*/

/*

Bellek adresini bilmek neden yararlıdır?

İşaretçiler, bilgisayarın belleğindeki verileri manipüle etmemize izin verdikleri için, C programlama dilinde önemlidir.
İşaretçiler, kodu azaltabilir ve performansı artırabilir .

İşaretçiler, C'yi Python ve Java gibi diğer programlama dillerinden ayıran önemli bir özellikdir.

*/


return 0;
}
