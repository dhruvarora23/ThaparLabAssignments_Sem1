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

    int search;
    printf("Enter the element you want ot search: ");
    scanf("%d", &search);

    for(int m = 0; m < n; m++){
        if(a[m] == search){
            printf("Number found at %d", a[m]);
        }
        else{
            printf("Number not found");
            break;
        }
    }
  

    return 0;

}