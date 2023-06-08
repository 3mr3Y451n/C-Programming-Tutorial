#include <stdio.h>

int main() {

//for döngüsünde break kullanımına örnek
int i;

for (i = 0; i < 10; i++) {
  if (i == 4) {
    break;
  }
  printf("%d\n", i);
}
printf("\n");

//for döngüsünde continue kullanımına örnek
//int i;
for (i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  printf("%d\n", i);
}
printf("\n");

//while döngüsünde break kullanımına örnek
i = 0;

while (i < 10) {
  if (i == 4) {
    break;
  }
  printf("%d\n", i);
  i++;
}
printf("\n");

//while döngüsünde continue kullanımına örnek
i = 0;

while (i < 10) {
  if (i == 4) {
    i++;
    continue;
  }
  printf("%d\n", i);
  i++;
}

    return 0;
}
