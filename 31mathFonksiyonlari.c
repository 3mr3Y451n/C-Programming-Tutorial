#include <stdio.h>
#include <math.h>

int main() {
/*

Matematik fonksiyonları kullanabilmek için
math.h başlığını programımıza eklememiz gerekir.
Sayılar üzerinde matematiksel görevleri gerçekleştirmemize imkan sağlar.

*/

// Karekök
//Bir sayının karekökünü bulmak için sqrt() fonksiyonunu kullanabiliriz.

printf("%f\n", sqrt(16));

// Sayı Yuvarlama
//ceil() fonksiyonu bir üst tamsayıya, floor() fonksiyonu ise bir alt tam sayıya yuvarlar

printf("%f\n", ceil(1.4));
printf("%f\n", floor(1.4));

// Kuvvet
//pow() fonksiyonu ilk parametrenin ikinci parametredeki kuvvetini döndürür.

printf("%f\n", pow(4, 3));

// Diğer Matematik Fonksiyonları

/*
Fonksiyon	Açıklama
abs(x)	    x'in mutlak değerinin döndürür
acos(x)	    x'in ark kosinüsünü döndürür
asin(x)	    x'in ark sinüsünü döndürür
atan(x)	    x'in ark tanjantını döndürür
cbrt(x)	    x'in küp kökünü döndürür
cos(x)	    x'in kosinüsünü döndürür
exp(x)	    E üzeri x değerini döndürür
sin(x)	    x'in sinüsünü döndürür (x radyandır)
tan(x)	    x'in tanjantını döndürür
*/


    return 0;
}
