//program to print diagonals of a matrix
#include<iostream>
using namespace std;
int main(){
    int matrix[4][4] ={
        {12, 87, 43, 56},
        {78, 34, 91, 23},
        {65, 10, 39, 88},
        {44, 72, 16, 99}
    };
    int result[4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
        if(i==j){
        	result[i]=matrix[i][j];
		}
    }
    }
    for(int i=0;i<4;i++){
        cout<<result[i]<<" ";
    }
    return 0;
}
