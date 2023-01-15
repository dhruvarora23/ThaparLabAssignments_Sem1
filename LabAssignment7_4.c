#include <stdio.h>

int prime(int i);

int main(){
    int a; 
    int res = 0;
    printf("Enter a number: ");
    scanf("%d", a);
    res = prime(a);

    if(res == 1){
        printf("Number is not prime");
    }
    else{
        printf("Number is prime");
    }

    return 0;
}

int prime(int i){

    if(i == 0 || i == 1){
        return 1;
    }

    for(int a = 2; a <= i/2; a++){
        if(i % a == 0){
            return 1;
        }
    }

    return 0;

}