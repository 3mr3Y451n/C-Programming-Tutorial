#include <stdio.h>

int main() {
/*
Bir kod bloğunda
tam olarak kaç kez döngü yapmak istediğinizi biliyorsanız,
while döngüsü yerine for döngüsü kullanılır.

for (statement 1; statement 2; statement 3) {
  // code block to be executed
}

ifade 1 , başlangıç değeri. kod bloğunun yürütülmesinden önce yürütülür (bir kez).
ifade 2 , sağlanacak koşul. kod bloğunu yürütme koşulunu tanımlar.
ifade 3 , değişken değerini arttırma ya da azaltma. kod bloğu yürütüldükten sonra (her seferinde) yürütülür.
*/

int i;

for (i = 0; i < 5; i++) {
  printf("%d\n", i);
}

printf("\n");

for (i = 0; i <= 10; i = i + 2) {
  printf("%d\n", i);
}

printf("\n");

//int i;
int j;

// Outer loop
for (i = 1; i <= 2; ++i) {
  printf("Outer: %d\n", i);  // Executes 2 times

  // Inner loop
  for (j = 1; j <= 3; ++j) {
    printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
  }
}

    return 0;
}
