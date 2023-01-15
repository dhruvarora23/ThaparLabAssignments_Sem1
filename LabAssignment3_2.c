#include <stdio.h>
#include <math.h>

int main(){

    int a;
    int b;
    int c;
    int d; 

    // given that d>=0

    printf("Quadratic Eqn - ax^2 + bx + c\n");
    printf("Enter a, b, c\n");

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    d = (b*b) - (4 * a * c);

    if(d > 0){
        float root1 = -b + sqrt(d) / (2 * a);
        printf("Root 1 is: %f\n", root1);

        float root2 = -b - sqrt(d) / (2 * a);
        printf("Root 2 is: %f\n", root2);
    }
    else if(d = 0){
        float r1 = -b/(2*a);
        printf("Root 1 is: %f\n", r1);

        float r2 = -b/(2*a);
        printf("Root 1 is: %f\n", r2);
    }
    else{
        printf("Roots are imaginary");
    }

    return 0;

}