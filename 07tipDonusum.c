#include <stdio.h>

int main() {
    // örtük dönüşüm -> implicit conversion (otomatik)
    // Automatic conversion: int to float
    float myFloat = 9;
    printf("%f\n", myFloat); // 9.000000

    // Automatic conversion: float to int
    int myInt = 9.99;
    printf("%d\n", myInt); // 9

    float sum = 5 / 2;
    printf("%f\n", sum); // 2.000000


    // açık dönüşüm -> explicit conversion (manuel)
    // Manual conversion: int to float
    float sum1 = (float) 5 / 2;
    printf("%f\n", sum1); // 2.500000

    //You can also place the type in front of a variable
    int num1 = 5;
    int num2 = 2;
    float sum2 = (float) num1 / num2;
    printf("%f\n", sum2); // 2.500000
    printf("%.1f\n", sum2); // 2.5

    return 0;
}
