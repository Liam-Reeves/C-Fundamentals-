#include <stdio.h>
#include <math.h>

void hypotenuse(void);
void school(void);
int main(void){
    int choice;
    printf("\nChoose an option:\n1. Calculate hypotenuse\n2. Calculate school average\n");
    scanf("%d", &choice);
    
    switch (choice){
        case 1:
            hypotenuse();
            break;
        case 2:
            school();
            break;
        default:
            printf("Invalid choice.\n, Exiting program\n");
            break;
    }
    
     return 0;
}

void hypotenuse(void){
    double A;
    double B;
    double C;

    printf("\nInput side A: ");
    scanf("\n%lf",&A);

    printf("input side B: ");
    scanf("\n%lf", &B);
    
    C = sqrt(A*A + B*B);

    printf("The hypotenuse is %.2f\n", C);
}

void school(void){

    char name[25];
    double Math, English, Kiswahili, Biology, Physics, Chemistry,Geography, Computer;

    double Average;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Input marks for Math: " );
    scanf("%lf", &Math);

    printf("Input marks for English: ");
    scanf("%lf", &English);

    printf("Input marks for Kiswahili: ");
    scanf("%lf", &Kiswahili);

    printf("Input marks for Biology: ");
    scanf("%lf", &Biology);

    printf("Input marks for Physics: ");
    scanf("%lf", &Physics);

    printf("Input marks for Chemistry: ");
    scanf("%lf", &Chemistry);
    
    printf("Input marks for Geography: ");
    scanf("%lf", &Geography);
    
    printf("Input marks for Computer:  ");
    scanf("%lf", &Computer);

    Average = (Math + English + Kiswahili + Biology + Physics + Chemistry + Geography + Computer) / 8;
    printf("Congratulations %s, your average marks are %.2f\n", name, Average);

}

  







