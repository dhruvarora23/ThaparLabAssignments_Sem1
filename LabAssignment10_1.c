#include <stdio.h>

int main(){

    int i = 3;
    int *j = &i;
    float k = 7.2;
    float *p = &k;

    printf("%u\n", &k);
    printf("%u\n", p);
    printf("%u\n", i);
    printf("%u\n", k);
    printf("%u\n", &j);
    printf("%u\n", &i);
    printf("%u\n", *j);
}