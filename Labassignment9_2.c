#include <stdio.h>
#include <string.h>

int main(){

    char a[100];
    char b[100];

    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);

    printf("Enter a string: ");
    fgets(b, sizeof(b), stdin);

    printf("Concat of both string is %s", strcat(a, b));

}