// stdin : standard input
// stdout: standard output
// stderr: standard error
// there's a before between input device and the process & the process and the output device as the I/O is a very slow process

// Input functions: scanf(), fgets(), getchar(), getc()
// Output funcions: printf(), puts(), fputs(), putchar(), putc()

// #include<stdio.h>
// int main(){
//     int x;
//     scanf("%d", &x);
//     printf("The number is : %d", x);
//     return 0;
// }



// Input date with separator: /
// #include<stdio.h>
// int main(){
//     int dd,mm,yyyy;
//     scanf("%d/%d/%d", &dd,&mm,&yyyy);
//     printf("The date is : %d\n", dd);
//     printf("The month is : %d\n", mm);
//     printf("The year is : %d\n", yyyy);
//     return 0;
// }



// scanf() cannot read a string of characters, it can read only one word, as soon as it encounters a whitespace it stops inputting. hence we use fgets.

// #include<stdio.h>
// int main(){
//     char name[100];
//     fgets(name, 100, stdin);
//     printf("HI, %s", name);
//     printf("Welcome to GFG.");
//     return 0;
// }


// Format Specifiers for Integers

// d: int       i: almost same as int
// u: unsigned int      ld: long
// lld: long long       zd: size_t
// x: Hexadecimal       o: octal

// #include<stdio.h>
// int main(){
//     int a = 10;
//     printf("%d\n", a);

//     long b = 20;
//     printf("%ld\n", b);

//     unsigned c = 30;
//     printf("%u\n", c);

//     long long d = 40;
//     printf("%lld\n", d);

//     size_t e = sizeof(a);
//     printf("%zu\n", e);

//     return 0;
// }



// Format Specifiers for Floating Point Numbers
// #include<stdio.h>
// int main(){
//     float x = 10.25;
//     double y = 125.387648;
//     double z = 15e+6;
//     printf("%g\n%g\n%g\n", x,y,z);
//     return 0;

// }


// Other format specifiers

// #include<stdio.h>
// int main(){
//     int a = 'g';
//     char b[] = "gfg";
//     printf("%c\n%s\n%p", a,b,&a);
//     return 0;
// }



// %n stores number of characters printed so far before encountering %n

#include<stdio.h>
int main(){
    int x;
    printf("abc%ndef\n", &x);
    printf("The value of x is : %d", x);
    return 0;
}