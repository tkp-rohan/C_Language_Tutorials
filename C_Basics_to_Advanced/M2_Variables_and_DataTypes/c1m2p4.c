// Literals 


// Integer Literals

// #include<stdio.h>
// int main(){
//     int a = 10;     //Decimal
//     int b = 0x1A;   //Hexadecimal
//     int c = 016;    //Octal
//     int d = 0b11;   //Binary
//     int e = 124;
//     unsigned int f = 124u;
//     long int g = 124L;
//     long long h = 124LL;


//     printf("%d\n%d\n%d\n%d\n%d\n%d\n%ld\n%lld\n",a,b,c,d,e,f,g,h);
//     return 0;
// }



// Floating Point Literals

// #include<stdio.h>
// int main(){
//     float a = 10.5f;
//     double b = 10.515;
//     long double c = 10.515L;
//     float d = 2.1e4f;
//     double e = 200.1e-80;
//     double f = 0x1A.1p2;

//     printf("%g\n%g\n%Lg\n%g\n%g\n%g\n", a,b,c,d,e,f);
 
//     return 0;
// }



// Character and String Literals
// #include<stdio.h>
// int main(){
//     char ch = 'g';
//     const char *s = "gfg";  //* indicates pointer and this is a constant pointer so it is immutable
//     printf("%c\n%s\n", ch,s);
//     return 0;
// } 



// Type conversion: Implicit and Explicit


// Swap two variables
#include<stdio.h>
int main(){
    int a = 10;
    int b = 20;
    printf("a=%d\tb=%d\n",a,b);

    int temp = a;
    a=b;
    b=temp;

    printf("a=%d\tb=%d\n",a,b);

    return 0;
}