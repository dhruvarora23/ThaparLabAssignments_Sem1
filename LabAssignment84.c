#include <stdio.h>

int main(){

    int a[10];
    int n;

    printf("Enter the number of elemts: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("printing the array");
    for(int x = 0; x < n; x++){
        printf("%d", a[x]);
    }

    int pos;
    printf("Enter the posiiton you want to delete: ");
    scanf("%d", &pos);

    if(pos > n+1){
        printf("Position out of range");
    }
    else{

        for(int k = pos - 1; k < n - 1; k++){
            a[k] = a[k+1];
        }

        printf("Printing the resultant array");
        for(int m = 0; m < n - 1; m++){
            printf("%d", a[m]);
        }

        return 0;
    }

}