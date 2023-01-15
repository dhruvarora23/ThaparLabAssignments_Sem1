#include <stdio.h>

int main(){
    int a[10];
    int b[10];
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("Printing the original array: ");
    for(int k = 0; k < n; k++)
    {
        printf("%d", a[k]);
    }

    for(int m = 0; m < n; m++)
    {
        b[m] = a[m];
    }

    printf("Printing the copied array: ");
    for(int x = 0; x < n; x++)
    {
        printf("%d", b[x]);
    }

    return 0;
}