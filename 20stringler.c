#include <stdio.h>

int main() {
/*
Dizeler, metin/karakterleri depolamak için kullanılır.

Diğer birçok programlama dilinden farklı olarak,
C'de kolayca dize değişkenleri oluşturmak için
bir String türü yoktur.
Bunun yerine, C'de bir dize yapmak için
char türü kullanmalı ve
bir karakter dizisi oluşturmalıdır:
*/
char greetings[] = "Hello World!";

/*
To output the string,
you can use the printf() function
together with the format specifier %s
to tell C that we are now working with strings:
*/

printf("%s\n", greetings);

//Access Strings
printf("%c\n", greetings[0]);

//Modify Strings
greetings[0] = 'J';
printf("%s\n", greetings); // Outputs Jello World! instead of Hello World!

//Loop Through a String

char carName[] = "Volvo";
int i;

for (i = 0; i < 5; ++i) {
  printf("%c\n", carName[i]);
}
printf("\n");

//Another Way Of Creating Strings
char selam[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
printf("%s", selam);
printf("\n");

//Differences
char selamlama[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
char selamlama2[] = "Hello World!";

printf("%lu\n", sizeof(selamlama));   // Outputs 13
printf("%lu\n", sizeof(selamlama2));  // Outputs 13


    return 0;
}
