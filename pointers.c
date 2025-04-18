#include <stdio.h>

int main(){

    int a = 10;
    int *p = &a; 
    int *ptr;

    printf("Address of a: %p\n", (void*)&a); // Address of a
    printf("Value of a: %d\n", a);
    
    int age = 25;
    
    printf("%p" ,&age);
     
    
    
    
    return 0;// pointer to a
}