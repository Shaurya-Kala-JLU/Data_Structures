// Write a program to create a matrix of size 3x2 having all the
// even numbers. In such a way that numbers in a second row should be double of numbers in a first row.
#include<stdio.h>
int main(){
    int mat[3][2],j,even=2;
    for(j=0;j<2;j++){
            mat[0][j]=even;
            even=even+2;
    }
    for(j=0;j<2;j++){
            mat[1][j]=mat[0][j]*2;
    }
    for(j=0;j<2;j++) {
            mat[2][j]=mat[1][j]*2;
    }
    for(int i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}