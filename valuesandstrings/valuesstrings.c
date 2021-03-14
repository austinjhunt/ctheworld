#include <stdio.h>

// demonstrate embedding values into outputs using printf
int main(){
    printf("Here is an integer placeholder (%%d): %d\n", 27); 
    printf("Here is an equation: %d + %d = %d\n", 2,2,2+2); 

    printf("single character placeholder (%%c): %c\n", 'C');

    // You have to use double quotes for the arguments to %s placeholders
    printf("Here is a string placeholder (%%s): you are a %s\n", "programmer");
    printf("You are a %c (%%c) %s (%%s)! \n", 'C', "programmer");

    printf("Here is a floating point number placeholder (%%f): %f\n", 4.3278);
    return 0;
}