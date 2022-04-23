#include<stdio.h>
#include<stdlib.h>

matrix(){
   int n, m;
   int i, j;
   int matrix[10][10];
   printf("Enter the number of rows m: \n");
   scanf("%d", &m);
   printf("Enter the number of columns n: \n");
   scanf("%d", &n);
   printf("Enter the elements of the matrix: \n");
   for(i = 0; i < m ;i++){
    for(j = 0; j < n ;j++){
        scanf("%d", &matrix[i][j]);
    }
    }
    for(i = 0; i < m ;i++){
        for(j = 0; j < n ;j++){
            printf("%d, ", matrix[i][j]);
    }
        printf("\n");
    }
   return 0;
}

