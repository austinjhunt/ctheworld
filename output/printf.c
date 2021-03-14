#include <stdio.h>

/* printf is a much more powerful way to output */ 

int main() {
    printf("This is the way the world ends, \n"); 
    // the printf function does not automatically add a new line after the string. 
    printf("not with a bang but with a whimper.\n");

    printf("First line...\nSecond line...\n"); 

    // Note: this does not throw an error when compiled even though 
    // function is int main()
    // return (0);
}