#include <stdio.h>
#include <string.h>

int main() {

//  string fonksiyonlarını kullanabilmek için <string.h> başlık dosyasını kodunuza eklemelisiniz.
//  #include <string.h>

//  string uzunluğu

char alfabe[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
printf("%d\n", strlen(alfabe));

/*
Note that sizeof and strlen behaves differently,
as sizeof also includes the \0 character when counting:
*/
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
printf("%d\n", strlen(alphabet));   // 26
printf("%d\n\n", sizeof(alphabet));   // 27

/*
It is also important that you know
that sizeof will always return the memory size (in bytes),
and not the actual string length:
*/

char alphabet1[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
printf("%d\n", strlen(alphabet1));   // 26
printf("%d\n\n", sizeof(alphabet1));   // 50

//  string birleştirme
char str1[20] = "Merhaba ";
char str2[] = "Dünya!";

//  Concatenate str2 to str1 (result is stored in str1)
strcat(str1, str2);

// Print str1
printf("%s\n\n", str1);


//  string kopyalama
char str01[20] = "Hello World!";
char str02[20];

// Copy str01 to str02
strcpy(str02, str01);

// Print str02
printf("%s\n\n", str02);


//  string kıyaslama
char strng1[] = "Hello";
char strng2[] = "Hello";
char strng3[] = "Hi";

// Compare strng1 and strng2, and print the result
printf("%d\n", strcmp(strng1, strng2));  // Returns 0 (the strings are equal)

// Compare strng1 and strng3, and print the result
printf("%d\n", strcmp(strng1, strng3));  // Returns -4 (the strings are not equal)

    return 0;
}
