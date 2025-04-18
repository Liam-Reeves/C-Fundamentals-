#include <stdio.h>
#define PI 3.14159

int main(void){
 
    double radius;
    double area;
    printf("\nEnter the radius of the circle:");
    scanf("%lf", &radius);
    
    area =  PI * radius * radius;

     printf("The area of the circle is %.10f\n", area);


return 0;
}

