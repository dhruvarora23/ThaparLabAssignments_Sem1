#include <stdio.h>

int array(int arr[]);

int main(){

    int a[5] = {1, 2, 3, 4, 5};

    printf("Pass and returning an array.");

    array(a);
}

int array(int arr[]){
    printf("Elements of array are : ");  
    for(int i=0;i<5;i++)  
    {  
        printf("%d ", arr[i]);  
    }  
}