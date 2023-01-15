#include <stdio.h>

int main(){
    int a[10][10];
    int b[10][10];
    int c[10][10];
    int n;
    int k;
    int q;
    int w;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printf("Enter the number of columns: ");
    scanf("%d", &k);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            scanf("%d", &a[i][j]);
        }
      
    }

    printf("Enter the number of rows of 2nd matrix: ");
    scanf("%d", &q);

    printf("Enter the number of columns of 2nd matrix: ");
    scanf("%d", &w);

    for(int i = 0; i < q; i++){
        for(int j = 0; j < w; j++){
            scanf("%d", &b[i][j]);
        }
      
    }

    for(int i = 0; i < n; i++){

        for(int j = 0; j < k; j++){
            
            printf("%d\t", a[i][j]);
        
        }  
        printf("\n");
    } 

     for(int i = 0; i < n; i++){

        for(int j = 0; j < k; j++){
            
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t", c[i][j]);
        
        }  
        printf("\n");
    } 

    
}