#include <stdio.h>
#include <stdbool.h> // To include Booleans i.e  True or False


int main(void){
        // variables in C include: Integer, float, Char, Array, Booleans 

     int age = 21;
     float GPA = 2.05;
     char name[] = "Bro"; // to display a character array we use %s
     bool Ans = true;
     char grade = 'C';



     printf("Hello %s\n", name );
     printf("You are %d years old\n",age);
     printf("Your mean is %.2f\n",GPA);
     // to display a double float use %lf 
    printf("You're are client %d\n ", Ans);
    printf("Average is %c\n", grade);
        printf("Average is %c\n", grade);

    printf("Average is %c\n", grade);


   return 0;
}