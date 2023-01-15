#include <stdio.h>

int main(){

    int a;
    int number = 0;

    printf("Enter a 5 digit number: ");
    scanf("%d", &a);

    while(a!=0)
    {
        number = number * 10;
        number = a % 10 + number;
        a = a/10;
    }

    printf("%d", number);
    return 0;
}