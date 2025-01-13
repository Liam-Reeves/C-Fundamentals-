
#include <stdio.h>

int main(void ){
    char operator;
    int num1;
    int num2;
    int result;


    printf("Enter an operator (+ - * /):");
    scanf("%c", &operator);
   
    printf("Input num1: ");
    scanf("%d", &num1);

    printf("Input num2: ");
    scanf("%d", &num2);

    switch(operator){
        case '+':
            result = num1 + num2;
           printf("\nresult: %d\n", result);
            break;
            
        case '-':
        result = num1 - num2;
        printf("\nresult: %d\n", result);
        break;
        
        case '*':
        result = num1 * num2;
        printf("\nresult: %d\n", result);
         break;
        
        case '/':
            result = num1 / num2;
            printf("\nresult: %d\n", result);
            break;

      default:
      printf("%c Invalid operator\n");

    }



  
}


