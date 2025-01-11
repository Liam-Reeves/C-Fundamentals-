// write a c program that a multiplication table for a number provided for by the user.
//  The table should 10 multiples of the given program

#include <stdio.h>

int main (){
    int num1;
    int i;

    printf("Enter a number: ");
    scanf("%d", &num1);

    for(i=1; i<=10; i++) {
        printf("%d * %d =%d\n ", num1, i, num1 * i );
    }

    return 0;

}