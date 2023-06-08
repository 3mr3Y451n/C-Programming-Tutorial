#include <stdio.h>

int main() {

/*

C Yapıları (yapılar)
yapılar
Yapılar (yapılar olarak da adlandırılır), birkaç ilgili değişkeni tek bir yerde gruplandırmanın bir yoludur. Yapıdaki her değişken yapının bir üyesi olarak bilinir.

Bir diziden farklı olarak , bir yapı birçok farklı veri tipini (int, float, char, vb.) içerebilir.

Bir Yapı Oluşturun
Anahtar kelimeyi kullanarak bir yapı oluşturabilir struct ve üyelerinin her birini kaşlı ayraçlar içinde bildirebilirsiniz:

struct MyStructure {   // Structure declaration
  int myNum;           // Member (int variable)
  char myLetter;       // Member (char variable)
}; // End the structure with a semicolon
Yapıya erişmek için bir değişken oluşturmanız gerekir.

structYöntemin içindeki anahtar sözcüğü main(), ardından yapının adını ve ardından yapı değişkeninin adını kullanın :

"s1" adında bir yapı değişkeni oluşturun:

struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
  struct myStructure s1;
  return 0;
}
Erişim Yapısı Üyeleri
Bir yapının üyelerine erişmek için nokta sözdizimini ( .) kullanın:

Örnek
// Create a structure called myStructure
struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
  // Create a structure variable of myStructure called s1
  struct myStructure s1;

  // Assign values to members of s1
  s1.myNum = 13;
  s1.myLetter = 'B';

  // Print values
  printf("My number: %d\n", s1.myNum);
  printf("My letter: %c\n", s1.myLetter);

  return 0;
}
Artık tek bir yapı kullanarak farklı değerlere sahip birden çok yapı değişkenini kolayca oluşturabilirsiniz:

Örnek
// Create different struct variables
struct myStructure s1;
struct myStructure s2;

// Assign values to different struct variables
s1.myNum = 13;
s1.myLetter = 'B';

s2.myNum = 20;
s2.myLetter = 'C';
Yapılardaki Dizeler Ne Olacak?
C'deki dizelerin aslında bir karakter dizisi olduğunu ve ne yazık ki şu şekilde bir diziye değer atayamayacağınızı unutmayın:

Örnek
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];  // String
};

int main() {
  struct myStructure s1;

  // Trying to assign a value to the string
  s1.myString = "Some text";

  // Trying to print the value
  printf("My string: %s", s1.myString);

  return 0;
}
Bir hata oluşacaktır:

prog.c:12:15: error: assignment to expression with array type
Ancak bunun için bir çözüm var! İşlevi kullanabilir strcpy() ve değeri s1.myStringşu şekilde atayabilirsiniz:

Örnek
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30]; // String
};

int main() {
  struct myStructure s1;

  // Assign a value to the string using the strcpy function
  strcpy(s1.myString, "Some text");

  // Print the value
  printf("My string: %s", s1.myString);

  return 0;
}
Sonuç:

My string: Some text
Daha Basit Sözdizimi
Ayrıca, bir yapı değişkeninin üyelerine bildirim zamanında tek bir satırda değerler atayabilirsiniz.

Değerleri kaşlı ayraçlar içinde virgülle ayrılmış bir listeye eklemeniz yeterlidir {}. strcpy()Bu teknikle dize değerleri işlevini kullanmak zorunda olmadığınızı unutmayın :

Örnek
// Create a structure
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};

int main() {
  // Create a structure variable and assign values to it
  struct myStructure s1 = {13, 'B', "Some text"};

  // Print values
  printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

  return 0;
}
Not: Girilen değerlerin sırası, yapıda bildirilen değişken türlerinin sırasına uymalıdır (int için 13, char için 'B', vb.).

Yapıları Kopyala
Ayrıca bir yapıyı diğerine atayabilirsiniz.

Aşağıdaki örnekte, s1'in değerleri s2'ye kopyalanmıştır:

Örnek
struct myStructure s1 = {13, 'B', "Some text"};
struct myStructure s2;

s2 = s1;
Değerleri Değiştir
Bir değeri değiştirmek/modifiye etmek istiyorsanız, nokta sözdizimini ( .) kullanabilirsiniz.

Ve bir dizi değerini değiştirmek için, strcpy()işlev yine kullanışlıdır:

Örnek
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};

int main() {
  // Create a structure variable and assign values to it
  struct myStructure s1 = {13, 'B', "Some text"};

  // Modify values
  s1.myNum = 30;
  s1.myLetter = 'C';
  strcpy(s1.myString, "Something else");

  // Print values
  printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

  return 0;
}
Değerleri değiştirmek, özellikle yapı değerlerini kopyaladığınızda kullanışlıdır:

Örnek
// Create a structure variable and assign values to it
struct myStructure s1 = {13, 'B', "Some text"};

// Create another structure variable
struct myStructure s2;

// Copy s1 values to s2
s2 = s1;

// Change s2 values
s2.myNum = 30;
s2.myLetter = 'C';
strcpy(s2.myString, "Something else");

// Print values
printf("%d %c %s\n", s1.myNum, s1.myLetter, s1.myString);
printf("%d %c %s\n", s2.myNum, s2.myLetter, s2.myString);
Peki, yapılar nasıl faydalıdır?
Arabalar hakkında marka, model ve yıl gibi farklı bilgileri depolamak için bir program yazmanız gerektiğini hayal edin. Yapılarla ilgili harika olan şey, tek bir "Araba şablonu" oluşturabilmeniz ve onu yaptığınız her araba için kullanabilmenizdir. Gerçek hayattan bir örnek için aşağıya bakın.

Gerçek Hayat Örneği
Arabalar hakkında farklı bilgileri depolamak için bir yapı kullanın:

Örnek
struct Car {
  char brand[50];
  char model[50];
  int year;
};

int main() {
  struct Car car1 = {"BMW", "X5", 1999};
  struct Car car2 = {"Ford", "Mustang", 1969};
  struct Car car3 = {"Toyota", "Corolla", 2011};

  printf("%s %s %d\n", car1.brand, car1.model, car1.year);
  printf("%s %s %d\n", car2.brand, car2.model, car2.year);
  printf("%s %s %d\n", car3.brand, car3.model, car3.year);

  return 0;
}

*/
    return 0;
}
