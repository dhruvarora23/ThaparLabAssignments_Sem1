#include <stdio.h>
#include <string.h>

int main(){

    /*char ch[100] = "Dhruv";
    char st[100];
    strcpy(st, ch);

    printf("%s", st);
    */

    char a[100];
    char b[100];
    int i;

    printf("Enter String: ");
    fgets(a, sizeof(a), stdin);

    for(i = 0; a[i] != '\0'; i++){
        b[i] = a[i];
    }

    b[i] = '\0';
    printf("Copied String is %s", b);
    
    return 0;
}