//deteminant of matrix
#include <stdio.h>
void Co(int mat[3][3], int temp[3][3], int p, int q){
    int i = 0, j = 0;
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            if (row != p && col != q) {
                temp[i][j++] = mat[row][col];
                if (j == 2) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}
int deter(int mat[3][3]){
    int temp[3][3];
    int sign = 1, det = 0;
    if (mat[0][0] != 0 || mat[0][1] != 0 || mat[1][0] != 0 || mat[1][1] != 0) {
        if (mat[2][0] == 0 && mat[2][1] == 0 && mat[2][2] == 0) {
            return (mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]);
        }
    }
    for (int f = 0; f < 3; f++) {
        Co(mat, temp, 0, f);
        det += sign * mat[0][f] * deter(temp);
        sign = -sign;
    }
    return det;
}
int main(){
    int mat[3][3];
    printf("Enter elements of 3 x 3 matrix:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);
    printf("Determinant of the matrix = %d\n", deter(mat));
    return 0; 
}
