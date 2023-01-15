#include <stdio.h>
#include <string.h>


int main(){
    char name[3][100];
    int roll[3];
    int marks[3];


    printf("Enter name: ");
    scanf("%s", name[0]);
    printf("Enter roll number: ");
    scanf("%d", &roll[0]);

    printf("Enter name: ");
    scanf("%s", name[1]);
    printf("Enter roll number: ");
    scanf("%d", &roll[1]);

    printf("Enter name: ");
    scanf("%s", name[2]);
    printf("Enter roll number: ");
    scanf("%d", &roll[2]);


    printf("%s\n", name[0]);
    printf("%d\n", roll[0]);
    printf("\n");
    printf("%s\n", name[1]);
    printf("%d\n ", roll[1]);
    printf("\n");
    printf("%s\n", name[2]);
    printf("%d\n", roll[2]);

    return 0;

}
    