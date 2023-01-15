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

    int max = a[0];
    int min = a[0];

    for(int m = 0; m < n; m++)
    {
       if(a[m] > max){
            max = a[m];
       }

       if(a[m] < min){
            min = a[m];
       }

    }

    printf("The max value is %d", max);
    printf("The min value is %d", min);


}