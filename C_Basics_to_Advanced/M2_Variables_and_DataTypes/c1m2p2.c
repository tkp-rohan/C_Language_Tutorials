
// Global and Local Variables


// #include<stdio.h>

// int x = 100; //Global Variables

// int main(){

//     int y = 10; //Local Variable
//     printf("%d\n", y);

//     printf("%d\n", x);

//     return 0;
// }





// Global variables when not initialized by default are assigned default values like 0 in case of integers, etc.

// In case of local variables if we leave them uninitialized we get random/garbage value.


// #include<stdio.h>

// int x ; //Global Variables

// int main(){

//     printf("%d\n", x);

//     return 0;
// }



// Extern keyword allows us to initialize global variables after their first use and tells compiler that the particular global variable will be initialized later.

// In short it's like use them first and define them later.

// #include<stdio.h>

// extern int x ; //Global Variables

// int main(){

//     printf("%d\n", x);

//     return 0;
// }

// int x = 100;




// When we have local and global variables of the same name then upon usinf printf() function the local variables is preinted.

// So remember in case if we have variables differently scoped but with same name they are printed in the inner to outer scope priority manner;

#include<stdio.h>
int x  = 100; //Global Variables
int main(){

    int x = 200; 

    {
        int x = 300;
        printf("%d\n", x);

    }
    return 0;
}
