#include <stdio.h>

int main() {

// C İşaretçiler
// bir değişken bellek adresini, & referans işleçle alabilir.

int myAge = 43; // an int variable

printf("%d\n", myAge);  // myAge değişkeninin değerini çıktı olarak verir (43)
printf("%p\n\n", &myAge); // myAge değişkeninin bellek adresini çıktı olarak verir ((0x7ffe5367e044) gibi)

/*İşaretçi, başka bir değişkenin bellek adresini saklayan bir değişkendir.
Bir işaretçi değişkeni , aynı türde bir veri türüne (int gibi) işaret eder ve işleçle * oluşturulur .
Çalıştığınız değişkenin adresi işaretçiye atanır:

*/

int benimYasim = 43;     // An int variable
int* ptr = &benimYasim;  // A pointer variable, with the name ptr, that stores the address of myAge

// Output the value of myAge (43)
printf("%d\n", benimYasim);

// Output the memory address of myAge (0x7ffe5367e044)
printf("%p\n", &benimYasim);

// Output the memory address of myAge with the pointer (0x7ffe5367e044)
printf("%p\n", ptr);

/*

Örneğin açıklaması:

Adında bir değişkene ( ) işaretptr eden bir işaretçi değişkeni oluşturun .
İşaretçinin türünün, birlikte çalıştığınız değişkenin türüyle eşleşmesi gerektiğini unutmayın ( bizim örneğimizde). intmyAgeint

& Değişkenin bellek adresini saklamak için işleci kullanın myAgeve işaretçiye atayın.

Şimdi, 'nin bellek adresinin ptrdeğerini tutar .myAge

*/

// Dereference

/*

In the example above, we used the pointer variable to get the memory address of a variable (used together with the & reference operator).

You can also get the value of the variable the pointer points to, by using the * operator (the dereference operator):

*/

int myAge = 43;     // Variable declaration
int* ptr = &myAge;  // Pointer declaration

// Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
printf("%p\n", ptr);

// Dereference: Output the value of myAge with the pointer (43)
printf("%d\n", *ptr);

/* Note that the * sign can be confusing here, as it does two different things in our code:

-When used in declaration (int* ptr), it creates a pointer variable.
-When not used in declaration, it act as a dereference operator.
Good To Know: There are two ways to declare pointer variables, but the first way is recommended:

*/

int* myNum; // Recommended
int *myNum;

/*

Notes on Pointers

Pointers are one of the things that make C stand out from other programming languages, like Python and Java.
They are important in C, because they allow us to manipulate the data in the computer's memory. This can reduce the code and improve the performance. If you are familiar with data structures like lists, trees and graphs, you should know that pointers are especially useful for implementing those. And sometimes you even have to use pointers, for example when working with files.
But be careful; pointers must be handled with care, since it is possible to damage data stored in other memory addresses.

*/


    return 0;
}
