// using const keyword to declare immutable variables


// #include<stdio.h>

// int main(){
//     const int x = 100;

//     // x = 200;    //This will throw an error as it is illegal to do so 

//     printf("%d", x);
//     return 0;

// }

// However we can change the value of the constant variable using pointers but that is a bad practice so we avoid doing that.


// #include<stdio.h>
// const double PI = 3.14;
// int main(){
//     int r = 9;

//     printf("Area: %f", PI*r*r);
//     return 0;
// }



// Static variables:  In C programming, a static variable is declared using static keyword and have the property of retaining their value between multiple function calls. It is initialized only once and is not destroyed when the function returns a value. It extends the lifetime of the variable till the end of the program.

#include <stdio.h>

// Function with static variable
int fun(){
    static int count = 0;
    count++;
    return count;
}
int main(){
    printf("%d ", fun());
    printf("%d ", fun());
    return 0;
}