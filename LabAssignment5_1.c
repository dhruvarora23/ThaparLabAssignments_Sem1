#include <stdio.h>

int main(){

    int a; 
    int b;
    int choice;

    printf("Calculator\n 1. Add \n 2. Subtract \n 3. Multiply \n 4. Divide \n Enter Choice: ");
    scanf("%d", &choice);

    printf("Enter 1st Number: ");
    scanf("%d", &a);
    printf("Enter 2nd Number: ");
    scanf("%d", &b);

    switch(choice){
        case 1:
            printf("Add\n");
            int c = a + b;
            printf("The addition is %d", c);
            break;
        case 2:
            printf("Subtract\n");
            int d = a - b;
            printf("The subtraction is %d", d);
            break;
        case 3:
            printf("Multiply\n");
            int e = a * b;
            printf("The multiplication is %d", e);
            break;
        case 4:
            printf("Divide\n");
            int f = a / b;
            printf("The Division is %d", f);
            break;
        default:
            printf("Invalid Input");

    }

    return 0;
}