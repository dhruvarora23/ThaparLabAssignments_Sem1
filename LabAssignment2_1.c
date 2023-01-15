#include <stdio.h>

int main(){

    int a;
    int b;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter another number: ");
    scanf("%d", &b);

    int c;
    c = a;
    a = b;
    b = c;

    printf("Numbers Interchanged - %d\n%d", a, b);

    return 0;
}