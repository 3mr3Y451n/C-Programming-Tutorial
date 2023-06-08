#include <stdio.h>

int main() {

//Kullanıcı girişi almak için "scanf()" işlevi kullanılır.

// Create an integer variable that will store the number we get from the user
int myNum;

// Ask the user to type a number
printf("Type a number: \n");

// Get and save the number the user types
scanf("%d", &myNum);

// Output the number the user typed
printf("Your number is: %d\n\n", myNum);


//Çoklu Girişler
/*
scanf() işlevi birden fazla girişe de izin verir.
aşağıdaki örnekte bir tamsayı ve
bir karakter girişi yapılması istenmektedir.
*/

//int myNum; yukarıda tanımlandığı için
char myChar;

// Ask the user to type a number AND a character
printf("Type a number AND a character and press enter: \n");

// Get and save the number AND character the user types
scanf("%d %c", &myNum, &myChar);

// Print the number
printf("Your number is: %d\n", myNum);

// Print the character
printf("Your character is: %c\n\n", myChar);


//  kullanıcı girişi olarak string ifade alma
// Create a string
char firstName[30];

// Ask the user to input some text
printf("Enter your first name: \n");

// Get and save the text
scanf("%s", firstName);

// Output the text
printf("Hello %s!\n\n", firstName);

/*
scanf() işlevin bazı sınırlamaları vardır.
boşluğu (boşluk, tab vb.) sonlandırma karakteri olarak kabul eder,
bu da, çok sayıda sözcük yazsanız bile
yalnızca tek bir sözcüğü görüntüleyebileceği anlamına gelir
*/

char fullName[30];

printf("Type your full name: \n");
scanf("%s", &fullName); // Type your full name: Emre Yasin

printf("Merhaba %s!\n", fullName); // Merhaba Emre

// Yukarıdaki örnekten, programın "Emre Yasin" yazdırmasını beklersiniz, ancak yalnızca "Emre" yazdırır.

/*

Bu nedenle, dizelerle çalışırken,
genellikle bir metin satırını okumak için fgets() işlevi kullanırız.
Şu bağımsız değişkenleri dahil etmeniz gerektiğini unutmayın:
dize değişkeninin adı sizeof(string_name) ve stdin

*/

char tamAd[30];

printf("Type your full name: \n");
fgets(tamAd, sizeof(tamAd), stdin);

printf("Hello %s", tamAd);

// Type your full name: John Doe
// Hello John Doe

/*

kullanıcıdan tek kelime almak için scanf() fonksiyonu,
birden fazla kelime almak için ise fgets() fonksiyonu kullanılır.

*/
    return 0;
}
