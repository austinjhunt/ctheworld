#include <stdio.h>

// getchar() gets character from standard input 
// putchar() writes character to standard output 
// both of these the standard io header file <stdio.h> 
// these functions work with integer values 
// these functions are stream-oriented 

int main() {
    int c; 
    printf("Type a letter: ") ;
    c = getchar(); 
    // note: c is data type int, but we are using %c 
    // because we want to print it's character value, not its code/integer value. 
    printf("You typed '%c'.\n", c); 

    // try printing the integer value of c 
    printf("The int version of the character '%c' is %d.\n", c, c); 

    // use putchar
    printf("Using putchar()... You typed "); 
    putchar(c); 
    // since this is a character, this needs to use single quotes. 
    putchar('\n'); 

    // stream output is buffered. computer waits until buffer 
    // is full/flush before it actually sends out the output. 
    return 0; 
}