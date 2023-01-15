#include <stdio.h>

int main(){
    FILE *filepointer;
    char a;
    char ch;
    int count = 0;
    int count2 = 0;
    int count3 = 0;

    filepointer = fopen("a.txt", "r");
    ch = fgetc(filepointer);

    while(ch != EOF){
        if(ch == ' '){
            ++count2;
        }
        if(ch == '\n'){
            ++count2;
            ++count3;
        }
        count++;
        ch = fgetc(filepointer);
    }

    printf("Number of letters are: %d\n", count);
    printf("Number of words are: %d\n", count2);
    printf("Number of lines are: %d\n", count3);

    fclose(filepointer);

    return 0;
}