#include <stdio.h>

int main (void){

    int num1;
    printf("Enter the number:\n");
    scanf("%d",&num1);

    if (num1 % 3 == 0 && num1 % 5 == 0){
        printf("FizzBuzz\n");
    }
    else if (num1 % 3 == 0){
        printf("Fizz\n");
    }
    else if (num1 % 5 == 0){
        printf("Buzz\n");
    }
    else{
        printf("%d\n",num1);

    }
    return 0;
 
}