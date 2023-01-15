#include <stdio.h>


int fact(int n);

int main()
{
    int n;
    printf("Enter a Number to Find Factorial: ");
    scanf("%d",&n);

    printf("\nFactorial of a Given Number is: %d ",fact(n));
    return 0;
}
int fact(int n)
{
    int i,fact=1;
    
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}