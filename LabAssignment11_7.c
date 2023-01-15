#include <stdio.h>

int main(){

    FILE *a;
    FILE *b;
    a = fopen("b.txt", "r");
    b = fopen("c.txt", "w");

    char ch;

    while(ch != EOF){
        ch = fgetc(a);
        fputc(ch, b);
    }
    
}