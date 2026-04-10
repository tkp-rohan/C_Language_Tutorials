// Variables allow to operate on data
// Variables are named labels to the memory locations
// Variable names must be meaningful
// camelCase, snake_case, CONSTANTS eg. PI, SIZE, LIMIT, MAX_AGE, etc...

// Integer: short, unsigned short, int, unsigned int, long, unsigned long, long long, unsigned long long.

// Character: char, unsigned char

// Floating: float, double, long double

// Other: bool, void

// Non primitives: Arrays, Pointers, Structures, Unions


#include<stdio.h>
#include<stdbool.h> //Needed to deal with boolean data type
int main(){
    
    int age = 24;
    char name[] = "Rohan";
    float weight = 63.5;
    bool isMarried = false;
    char gender = 'M';

    printf("%d\n", age);
    printf("%s\n", name);
    printf("%f\n", weight);
    printf("%d\n", isMarried);
    printf("%c\n\n", gender);

    printf("%zu\n", sizeof(age));
    printf("%zu\n", sizeof(name));
    printf("%zu\n", sizeof(weight));
    printf("%zu\n", sizeof(isMarried));
    printf("%zu\n", sizeof(gender));


    return 0;
}