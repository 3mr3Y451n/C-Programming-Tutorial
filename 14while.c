#include <stdio.h>

int main(){
/*
belirtilen koşul sağlandıkça (true)
kod bloğunu çalıştırmaya devam eder.

while (condition) {
  // code block to be executed
}
*/

int i = 0;

while (i < 5) {
  printf("%d\n", i);
  i++;
}

//Koşulda kullanılan değişkeni artırmayı unutmalı, aksi takdirde döngü asla bitmez!

return 0;
}
