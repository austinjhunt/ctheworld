#include <stdio.h> 

int get_integer_value(){
    return 5; 
}
float get_float_value(){
    return 5.5;
}

int func1(){
    // multi variable declaration
    char x,y,z; 
    x = 'A';
    y = 'B';
    z = 'C'; 

    printf("It's as easy as %c%c%c!\n",x,y,z); 
    return 0;
}
int func2(){
    // declare a variable
    char ch; 
    // declared vars have no value until assigned with = 

    /* 
    ch = 'x'; // use equal assignment operator 
    a = z; // assign value of another variable z to a
    y = line / 4; // assign result of expression to y 
    w = width(); // assign return value of a function to w
    */ 

    int age; 
    age = 30; 
    printf("The C language is over %d years old\n", age); 
    age = 35; 
    printf("The C language is over %d years old\n", age); 
    return age; 
} 

float func3(){
    float pi; 
    pi = 22.00/7.00; 
    printf("The ancients calculated PI as %f.\n", pi);
    return pi ; 
}

int main() {
    // call function 1 
    int f1 = func1(); 
    int age = func2(); 
    float pi = func3(); 
    printf("Age: %d\n", age);
    printf("PI: %f\n", pi);
}

