#include <stdio.h>

int main() {

/*

İşaretçiler ve Diziler

Dizilere erişmek için de işaretçileri kullanabiliriz.
Aşağıdaki tamsayı dizisini inceleyelim.

*/

int myNumbers[4] = {25, 50, 75, 100};

printf("dizinin elemanlarını ekrana bastıralım.\n");
int a;
a=0;
printf("Dizinin %d. elemanı: %d\n", a+1, myNumbers[a]);
a++;
printf("Dizinin %d. elemanı: %d\n", a+1, myNumbers[a]);
a++;
printf("Dizinin %d. elemanı: %d\n", a+1, myNumbers[a]);
a++;
printf("Dizinin %d. elemanı: %d\n", a+1, myNumbers[a]);
printf("\n");

printf("bir for döngüsü ile dizi öğeleri arasında döngü yapabileceğimizi biliyoruz.\n");

int myNumbers2[4] = {25, 50, 75, 100};
int i;

for (i = 0; i < 4; i++) {
  printf("Dizinin %d. elemanı: %d\n", i+1, myNumbers2[i]);
}
printf("\n");

/*
Çıktı:

25
50
75
100
*/


printf("Her bir dizi öğesinin değerini yazdırmak yerine, her bir dizi öğesinin bellek adresini yazdıralım:\n");


int myNumbers3[4] = {25, 50, 75, 100};
int j;

for (j = 0; j < 4; j++) {
  printf("%p\n", &myNumbers3[i]);
}
printf("\n");

/*
Çıktı:

0x7ffe70f9d8f0
0x7ffe70f9d8f4
0x7ffe70f9d8f8
0x7ffe70f9d8fc
*/

/*

Unutulmamalıdır ki,
bir int türün boyutunun tipik olarak 4 bayt olması nedeniyle,
her elemanın hafıza adresinin son sayısı farklıdır
ve bir öncekinden 4 fazladır.

*/

printf("int türünde bir değişkenin bellekte kapladığı alana bakalım.\n");
// Create an int variable
int myInt;

// Get the memory size of an int
printf("int boyutu: %lu\n", sizeof(myInt));
printf("\n");
/*
Çıktı:

4
*/


/*

Dolayısıyla,
yukarıdaki "bellek adresi örneğinden",
derleyicinin her dizi öğesi için 4 bayt bellek ayırdığını görebilirsiniz,
bu da tüm dizinin 16 bayt (4 * 4) bellek depolama alanı kapladığı anlamına gelir:

*/

int myNumbers4[4] = {25, 50, 75, 100};

// Get the size of the myNumbers array
printf("int türünde 4 elemanlı bir dizinin boyutu: %lu\n", sizeof(myNumbers4));
printf("\n");

/*
Çıktı:

16
*/


// İşaretçiler Dizilerle Nasıl İlişkilidir?

/*
Evet,
işaretçiler ve diziler arasındaki ilişki nedir?
C'de bir dizinin adı aslında dizinin ilk elemanına bir işaretçidir .
Kafa karıştırıcı mı?
Bunu daha iyi anlamaya çalışalım
ve yukarıdaki "bellek adresi örneğimizi" tekrar kullanalım.

*/

//İlk elemanın bellek adresi , dizinin adıyla aynıdır :

int myNumbers5[4] = {25, 50, 75, 100};

// Get the memory address of the myNumbers array
printf("%p\n", myNumbers5);

// Get the memory address of the first array element
printf("%p\n", &myNumbers5[0]);

printf("\n");

/*
Sonuç:

0x7ffe70f9d8f0
0x7ffe70f9d8f0
*/

/*
Bu temel olarak işaretçiler aracılığıyla dizilerle çalışabileceğimiz anlamına gelir!
Nasıl mı?
myNumbers, myNumbers'daki ilk öğeye bir işaretçi olduğundan,
ona erişmek için * operatörü kullanabilirsiniz:
*/

int myNumbers6[4] = {25, 50, 75, 100};

// Get the value of the first element in myNumbers
printf("%d\n", *myNumbers6);
printf("\n");
/*
Sonuç:

25
*/


//myNumbers'daki diğer öğelere erişmek için işaretçiyi/diziyi (+1, +2, vb.) artırabilirsiniz:

int myNumbers7[4] = {25, 50, 75, 100};

// Get the value of the second element in myNumbers
printf("%d\n", *(myNumbers7 + 1));

// Get the value of the third element in myNumbers
printf("%d\n", *(myNumbers7 + 2));

// and so on..
printf("\n");

/*
Sonuç:

50
75
*/

//Veya içinde döngü yapabiliriz:

int myNumbers8[4] = {25, 50, 75, 100};
int *ptr = myNumbers8;
int k;

for (k = 0; k < 4; k++) {
  printf("%d\n", *(ptr + k));
}
printf("\n");

/*
Çıktı:

25
50
75
100
*/

//İşaretçilerle dizi öğelerinin değerini değiştirmek de mümkündür:

int myNumbers9[4] = {25, 50, 75, 100};

// Change the value of the first element to 13
*myNumbers9 = 13;

// Change the value of the second element to 17
*(myNumbers9 +1) = 17;

// Get the value of the first element
printf("%d\n", *myNumbers9);

// Get the value of the second element
printf("%d\n", *(myNumbers9 + 1));
printf("\n");

/*
Çıktı:

13
17
*/

/*

Dizilerle bu şekilde çalışmak -özellikle yukarıdaki örneklerde olduğu gibi basit dizilerle- biraz gereksiz görünebilir.
Ancak, büyük diziler için, dizilere işaretçilerle erişmek ve bunları değiştirmek çok daha verimli olabilir.

Ayrıca işaretçilerle iki boyutlu dizilere erişmenin daha hızlı ve daha kolay olduğu kabul edilir.

Dizeler aslında dizi olduğundan, dizelere erişmek için de işaretçileri kullanabilirsiniz .

Şimdilik, bunun nasıl çalıştığını bilmeniz yeterlidir.
Ancak bir önceki bölümde belirttiğimiz gibi;
Bellekte depolanan diğer verilerin üzerine yazılması mümkün olduğundan,
işaretçiler dikkatle kullanılmalıdır.

*/


    return 0;
}
