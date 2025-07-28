// write a program to input a 3x3 matrix in a 2d array and print it
#include <stdio.h>
int main(){
    int mat[3][3],i,j;
    for(i=0;i<3;i++) {
        for(j =0;j<3;j++) {
            printf("Enter the number : ");
            scanf("%d",&mat[i][j]);
        }
    }
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
