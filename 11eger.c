#include <stdio.h>

int main(){

//C dili aşağıdaki koşulları destekler

/*
küçük:      a < b
küçük eşit: a <= b
büyük:      a > b
büyük eşit: a >= b
eşit        a == b
eşit değil: a != b
*/

//C aşağıdaki koşullu ifadelere sahiptir

/*
    if
Belirli bir koşul (true) sağlanıyorsa yürütülecek bir kod bloğu belirtmek için kullanılır.
    else
Aynı koşul (false) sağlanmıyorsa yürütülecek bir kod bloğu belirtmek için kullanılır.
    else if
İlk koşul (false) sağlanmıyorsa test edilecek yeni bir koşul belirtmek için kullanılır.
    switch
Yürütülecek birçok alternatif kod bloğu varsa kullanılır.
*/

    if (20 > 18) {
    printf("20 is greater than 18\n");
    }

    //Değişkenler ile de test edebiliriz
    int x = 20;
    int y = 18;
    printf("x = %d, y = %d\n", x, y);
    if (x > y) {
      printf("x is greater than y\n\n");
    }

    int time = 20;
    if (time < 18) {
      printf("Good day.");
    } else {
      printf("Good evening.");
    }
    // Outputs "Good evening."
    printf("\n\n");

    time = 22;
    if (time < 10) {
    printf("Good morning.");
    } else if (time < 20) {
    printf("Good day.");
    } else {
    printf("Good evening.");
    }
    // Outputs "Good evening."
    printf("\n\n");


    int myNum = 10; // Is this a positive or negative number?
    if (myNum > 0) {
    printf("The value is a positive number.");
    } else if (myNum < 0) {
    printf("The value is a negative number.");
    } else {
    printf("The value is 0.");
    }
    printf("\n\n");


    return 0;
}
