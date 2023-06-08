#include <stdio.h>

int main(){

/*
C operatörleri aşağıdaki gruplara ayırır:

1- Aritmetik işleçler (arithmetic)
2- Atama işleçleri (assignment)
3- Karşılaştırma işleçleri (comparison))
4- Mantıksal işleçler (logical)
5- Bitsel işleçler (bitwise)
*/



// 1- Aritmetik işleçler
//      +	Addition	Adds together two values	x + y
    int x = 5;
    int y = 3;
    printf("x = %d, y = %d\n", x, y);
    printf("x + y = %d\n", x + y);

//      -	Subtraction	Subtracts one value from another	x - y
    printf("x - y = %d\n", x - y);

//      *	Multiplication	Multiplies two values	x * y
    printf("x * y = %d\n", x * y);

//      /	Division	Divides one value by another	x / y
    printf("x / y = %d\n", x / y);

//      %	Modulus	Returns the division remainder	x % y
    printf("x % y = %d\n", x % y);

//      ++	Increment	Increases the value of a variable by 1	++x
    printf("++x = %d\n", ++x);

//      --	Decrement	Decreases the value of a variable by 1	--x
    printf("--x = %d\n\n", --x);




//  2- Atama işleçleri
//      =	a = 5	a = 5
    int a = 5;
    printf("a = %d\n", a);

//      +=	a += 3	a = a + 3
    a += 3;
    printf("a += 3 -> %d\n", a);

//      -=	a -= 3	a = a - 3
    a -= 3;
    printf("a -= 3 -> %d\n", a);

//      *=	a *= 3	a = a * 3
    a *= 3;
    printf("a *= 3 -> %d\n", a);

//      /=	b /= 3	b = b / 3
    float b = 5;
    b /= 3;
    printf("b /= 3 -> %f\n", b);

//      %=	x %= 3	x = x % 3
    x = 5;
    x %= 3;
    printf("x %= 3 -> %d\n", x);

//      &=	x &= 3	x = x & 3
    x = 5;
    x &= 3;
    printf("x &= 3 -> %d\n", x);

//      |=	x |= 3	x = x | 3
    x = 5;
    x |= 3;
    printf("x |= 3 -> %d\n", x);

//      ^=	x ^= 3	x = x ^ 3
    x = 5;
    x ^= 3;
    printf("x ^= 3 -> %d\n", x);

//      >>=	x >>= 3	x = x >> 3
    x = 5;
    x >>= 3;
    printf("x >>= 3 -> %d\n", x);

//      <<=	x <<= 3	x = x << 3
    x = 5;
    x <<= 3;
    printf("x <<= 3 -> %d\n\n", x);

//  3- Karşılaştırma işleçleri
//      ==	Equal to	x == y
    x = 5;
    y = 3;
    printf("x = %d, y = %d\n", x, y);
    printf("x == y -> %d\n", x == y); // returns 0 (false) because 5 is not equal to 3

//      !=	Not equal	x != y
    x = 5;
    y = 3;
    printf("x != y -> %d\n", x != y); // returns 1 (true) because 5 is not equal to 3

//      >	Greater than	x > y
    x = 5;
    y = 3;
    printf("x > y -> %d\n", x > y); // returns 1 (true) because 5 is greater than 3

//      <	Less than	x < y
    x = 5;
    y = 3;
    printf("x < y -> %d\n", x < y); // returns 0 (false) because 5 is not less than 3

//      >=	Greater than or equal to	x >= y
    x = 5;
    y = 3;
    printf("x >= y -> %d\n", x >= y); // Returns 1 (true) because five is greater than, or equal, to 3

//      <=	Less than or equal to	x <= y
    x = 5;
    y = 3;
    printf("x <= y -> %d\n\n", x <= y); // Returns 0 (false) because 5 is neither less than or equal to 3

//  4- Mantıksal işleçler
//      && 	Logical and	Returns true if both statements are true	x < 5 &&  x < 10
    x = 5;
    y = 3;
    printf("x = %d, y = %d\n", x, y);
    printf("x > 3 && x < 10 -> %d\n", x > 3 && x < 10);  // Returns 1 (true) because 5 is greater than 3 AND 5 is less than 10

//      || 	Logical or	Returns true if one of the statements is true	x < 5 || x < 4
    x = 5;
    y = 3;
    printf("x > 3 || x < 4 -> %d\n", x > 3 || x < 4); // Returns 1 (true) because one of the conditions are true (5 is greater than 3, but 5 is not less than 4)

//      !	Logical not	Reverse the result, returns false if the result is true	!(x < 5 && x < 10)
    x = 5;
    y = 3;
    printf("!(x > 3 && x < 10) -> %d\n", !(x > 3 && x < 10)); // Returns false (0) because ! (not) is used to reverse the result


//  5- Bitsel işleçler

//  Sizeof operatörü
int myInt;
float myFloat;
double myDouble;
char myChar;

printf("Integer boyutu: %lu\n", sizeof(myInt));
printf("Float boyutu: %lu\n", sizeof(myFloat));
printf("Double boyutu: %lu\n", sizeof(myDouble));
printf("Char boyutu: %lu\n\n", sizeof(myChar));

/*
Note that we use the %lu format specifer to print the result,
instead of %d.
It is because the compiler expects the sizeof operator to return a long unsigned int (%lu),
instead of int (%d).
On some computers it might work with %d,
but it is safer to use %lu
*/

    return 0;
}
