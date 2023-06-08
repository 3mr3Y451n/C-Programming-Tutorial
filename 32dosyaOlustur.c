#include <stdio.h>

int main(){

/*

C'de FILE tipinin bir işaretçisini (pointer) bildirerek
dosya açabilir okuyabilir ve yazabiliriz.

FILE *fptr
fptr = fopen(filename, mode);

FILE, temelde bir veri tipidir.
FILE veri tipini kullanabilmek için işaretçi oluşturulması gerekir.

Dosya açmak için iki parametre alan fopen() fonksiyonu kullanılır.

Parametre	Açıklama
filename	Açmak yada oluşturmak istediğiniz dosyanın adı filename.txt gibi
mode	    dosya ile ne yapmak istediğinizi gösteren tek bir harf (Read, Write or Append):
            w - dosyaya yazar
            a - dosyaya yeni veri ekler
            r - dosyadan okur

Bir dosya oluşturmak için fopen() fonksiyonun içindeki w modu kullanabilirsiniz.
Mod w, bir dosyaya yazmak için kullanılır. Ancak , dosya yoksa, sizin için bir tane oluşturur

*/


FILE *dosyaIsaretci;

// dosya oluştur
dosyaIsaretci = fopen("goreliReferans.txt", "w");

// dosyayı kapat
fclose(dosyaIsaretci);

//yukarıdak örnekte göreli referans kullanılmıştır.

/*
Başka bir şey belirtilmezse, dosya diğer C dosyalarınızla aynı dizinde oluşturulur.
Dosyayı belirli bir klasörde oluşturmak istiyorsanız, mutlak bir yol sağlamanız yeterlidir
*/
FILE *dosyaIsaretci2;
dosyaIsaretci2 = fopen("/home/sequential/Belgeler/Program/mutlakReferans.txt", "w");
fclose(dosyaIsaretci2);

/*
iki örnekte de fclose() fonksiyonu ile dosyaları kapattık.
Bu, iyi bir uygulama olarak kabul edilir.
Aşağıdaki faydaları sağlar:
-değişiklikler düzgün bir şekilde kaydedilmiş olur
-istendiği taktirde diğer uygulamalar dosyayı kullanabilir
-gereksiz bellek kullanımını önler
*/

return 0;
}
