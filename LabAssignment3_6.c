#include <stdio.h>

int main(){

    int a;
    
    printf("Enter a Number: ");
    scanf("%d", &a);

    (a%2 == 0) ? printf("Even Number") : printf("Odd Number");

    return 0;   
}