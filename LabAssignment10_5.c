#include <stdio.h>

int swap(int *a, int *b);

int main(){
    int n1; 
    int n2; 
    printf("Enter a Number: ");
    scanf("%d", &n1);

    printf("Enter another Number: ");
    scanf("%d", &n2);

    printf("%d %d\n", n1, n2);
    swap(&n1, &n2);
    
}

int swap(int *a, int *b){
    int t = *a; 
    *a = *b;
    *b = t;

    printf("The Swapped numbers are: %u %u", *a, *b);

    return 0;
}