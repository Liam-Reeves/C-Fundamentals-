#include <stdio.h>

int main(void){

    int age;
    char name[25];
    printf("What is your name?");
    // scanf("%s", name);
    fgets(name, 25 , stdin);
    printf("Hello, %s\n, how are you?", name);



    printf("How old are you?");
    scanf("%d", &age);
    printf("\nYou are %d years old",age);


}