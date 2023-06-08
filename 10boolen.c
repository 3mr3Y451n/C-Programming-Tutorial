#include <stdio.h>
#include <stdbool.h>

int main() {

    bool isProgrammingFun = true;
    bool isFishTasty = false;
    printf("Programlama Eelenceli mi? %d\n", isProgrammingFun);   // Returns 1 (true)
    printf("Balık tutma keyifli mi? %d\n\n", isFishTasty);        // Returns 0 (false)

    printf("10 > 9 -> %d\n", 10 > 9);  // Returns 1 (true) because 10 is greater than 9
    int x = 10;
    int y = 9;
    printf("x = %d, y = %d\n", x, y);
    printf("x > y -> %d\n\n", x > y);

    printf("10 == 10 -> %d\n", 10 == 10); // Returns 1 (true), because 10 is equal to 10
    printf("10 == 15 -> %d\n", 10 == 15); // Returns 0 (false), because 10 is not equal to 15
    printf("5 == 55 -> %d\n\n", 5 == 55); // Returns 0 (false) because 5 is not equal to 55

    bool isHamburgerTasty = true;
    bool isPizzaTasty = true;
    printf("isHamburgerTasty == isPizzaTasty -> %d\n\n", isHamburgerTasty == isPizzaTasty);

    return 0;
}
