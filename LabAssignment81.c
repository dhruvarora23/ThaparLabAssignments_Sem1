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
    
    printf("\n");
    printf("Reversing the string: ");
    for(int l = n - 1; l >= 0; l--){
        printf("%d", a[l]);
    }
    
    return 0;
}