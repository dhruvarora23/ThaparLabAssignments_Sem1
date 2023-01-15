#include <stdio.h>

int main(){
    int a[10];
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("Printing the string: ");
    for(int k = 0; k < n; k++)
    {
        printf("%d", a[k]);
    }

    int pos;
    int element;

    printf("Enter the position you want to insert the element at: ");
    scanf("%d", &pos);

    printf("Enter the element: ");
    scanf("%d", &element);


    n++;

    for(int l = n; l >= pos; l--){
        a[l] = a[l-1];
    }

    a[pos - 1] = element;
    printf("\n");

    for(int m = 0; m < n; ++m)
    {
        printf("%d", a[m]);
    }

    return 0;
}