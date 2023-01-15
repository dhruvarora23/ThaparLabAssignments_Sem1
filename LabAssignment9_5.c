#include <stdio.h>

int main(){
    char a[100];
    int count =  0;
    int i = 0;
    printf("Enter String: ");
    fgets(a, sizeof(a), stdin);

    while(a[i] != '\0'){
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U'){
            count++;
        }
        i++;
    }

    printf("Number of vowels is: %d", count);

    return 0;
}