#include <stdio.h>

void swap(int a, int b);


int main(){
    int a; 
    int b;

    printf("Enter a Number: ");
    scanf("%d", &a);

    printf("Enter another Number: ");
    scanf("%d", &b);

    swap(a, b);

}

void swap(int a, int b){
    int c = 0;

    a = c; 
    b = a;
    c = b;

    printf("Numbers swapped: %d %d", a, b);
}