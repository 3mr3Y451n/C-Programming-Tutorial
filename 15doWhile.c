#include <stdio.h>

int main(){

/*
Bu döngü,
koşulun doğru olup olmadığını kontrol etmeden önce
kod bloğunu bir kez çalıştıracak ve
ardından koşul doğru olduğu sürece
döngüyü tekrarlayacaktır.

do {
  // code block to be executed
}
while (condition);
*/

int i = 0;

do {
  printf("%d\n", i);
  i++;
}
while (i < 5);

//Koşulda kullanılan değişkeni artırmayı unutmalı, aksi takdirde döngü asla bitmez!

return 0;
}
