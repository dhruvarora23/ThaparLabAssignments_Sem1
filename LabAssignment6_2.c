#include <stdio.h>

int main(){

    int a;
    int flag = 0;

    printf("Enter a number: ");
    scanf("%d", &a);
    

    if(a == 0 || a == 1){
        flag = 1;
    }
    for(int i = 2; i <= a/2; ++i){
        if(a % i == 0){
            flag = 1;
        }
    }

    if(flag == 0){
        printf("Number is prime");
        
    }
    else{
        printf("Number is not prime");
    }

    return 0;
}