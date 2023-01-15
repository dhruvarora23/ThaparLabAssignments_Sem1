#include <stdio.h>

int main(){

    int a = 1;
    int n;

    printf("Enter Factorial: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        a = a * i;
    }
    printf("%d", a);

    return 0;
}