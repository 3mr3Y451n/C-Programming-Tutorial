#include <stdio.h>

int main() {
/*
switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}
*/

    int gun = 5;

    switch (gun) {
      case 1:
        printf("Pazartesi");
        break;
      case 2:
        printf("Salı");
        break;
      case 3:
        printf("Çarşamba");
        break;
      case 4:
        printf("Perşembe");
        break;
      case 5:
        printf("Cuma");
        break;
      case 6:
        printf("Cumartesi");
        break;
      case 7:
        printf("Pazar");
        break;
    default:
        printf("Hatalı gün girildi!");
    }

// Outputs "Thursday" (day 4)


return 0;
}
