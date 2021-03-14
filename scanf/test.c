#include <stdio.h>
// scanf 
// is included in stdio header file 
// reads specific data types from standard input 
// assigns values to a variable 
// uses printf placeholders! 
// uses the & (address-of) operator 
// takes two arguments 
    // 1. the formatting string (tells scanf to read a specific type of value)
    // 2. a variables ( you must prefix variable arg with &, 
    //         unless passing a string or array argument )

// note: scanf is not very good for string input :( 

int main() {
    int x ; 
    printf("Type an integer: "); 
    scanf("%d", &x); // use ampersand 
    printf("You typed: %d\n", x); 

    float y ;
    // if you don't also accept the newline character in this scanf call, then
    // the next scanf("%c", &z); call will automatically take this input's 
    // "enter" and place it (\n) in the variable z 
    char newlineignore; 
    printf("Type a float: "); 
    scanf("%f%c", &y,&newlineignore); // use ampersand 
    // will cause a precision error, will output You typed: 45.599998
    printf("You typed: %f\n", y); 

    char z ; 
    printf("Type a character: "); 
    scanf("%c", &z); // use ampersand 
    // will cause a precision error, will output You typed: 45.599998
    printf("You typed: %c\n", z); 
    return 0; 
}