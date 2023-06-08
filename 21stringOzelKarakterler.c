#include <stdio.h>

int main() {

/*
Dizelerin tırnak içinde yazılması gerektiğinden, C, aşağıdaki ifade için bir hata döndürür.
char txt[] = "We are the so-called "Vikings" from the north.";
*/

/*

Kaçış Karakteri	    Sonuç	Açıklama
\'	                '	    Tek tırnak
\"	                "	    Çift tırnak
\\	                \	    Ters kesme

*/

char txt[] = "We are the so-called \"Vikings\" from the north.";
printf("%s\n", txt);
char txt1[] = "It\'s alright.";
printf("%s\n", txt1);
char txt2[] = "The character \\ is called backslash.";
printf("%s\n\n", txt2);



/*

\n	New Line
\t	Tab
\0	Null

*/

char text[] = "Hello\nWorld!";
printf("%s\n", text);
char text1[] = "Hello\tWorld!";
printf("%s\n", text1);
char text2[] = {'H', 'e', 'l', 'l', 'o', '\0'};
printf("%s\n", text2);


return 0;
}
