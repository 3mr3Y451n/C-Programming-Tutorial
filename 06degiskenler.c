#include <stdio.h>

int main(){
    //type variableName = value;
    //%d tam sayılar için
    int numaram = 15;
    int rakamim;
    rakamim = 20;
    printf("Numaram: %d, ve rakamım: %d\n", numaram, rakamim);

    //%c karakter için
    char krktr1 = '%';       // karakter tanımlandı değişkene atandı
    char krktr2 = 'c';
    printf("Değişkene atanmış \"karakteri\" basmak için %c%c biçim belirleyicisi kullanılır.\n", krktr1, krktr2);

    //%f ondalıklı sayılar için
    float ondalik =3.14;
    char krktr3 = 'f';
    printf("Değişkene atanmış \"ondalıklı sayıyı\" basmak için %c%c biçim belirleyicisi kullanılır.\n", krktr1, krktr3);
    printf("Ondalıklı sayımız: %f\n", ondalik);

    //%lf double için
    double duble = 2.71828182845904523536;
    char krktr4 = 'l';
    printf("Değişkene atanmış \"duble sayıyı\" basmak için %c%c%c biçim belirleyicisi kullanılır.\n", krktr1, krktr4, krktr3);
    printf("Double ondalıklı sayımız: %f\n", duble);

    float myFloatNum = 3.5;

    printf("%f\n", myFloatNum); // varsayılan olarak virgülden sonra 6 basamak
    printf("%.1f\n", myFloatNum); // yalnız 1 basamak
    printf("%.2f\n", myFloatNum); // yalnız 2 basamak
    printf("%.4f", myFloatNum);   // yalnız 4 basamak

    return 0;
}
