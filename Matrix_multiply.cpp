#include<iostream>
using namespace std;
int main(){
    int m1[4][4];
    int m2[4][4];
    int result[4][4];
    for(int i =0;i<4;i++){
        for(int j =0;j<4;j++){
        cout<<"Enter the number : ";
        cin>>m1[i][j];
        }
    }
    for(int i =0;i<4;i++){
        for(int j =0;j<4;j++){
        cout<<"Enter the number : ";
        cin>>m2[i][j];
        }
    }
    for(int i =0;i<4;i++){
        for(int j =0;j<4;j++){
            result[i][j]=0;
            for(int k = 0;k<4;k++){
                result[i][j]=result[i][j]+(m1[i][k]*m2[k][j]);
            }
        }
    }
    for(int i =0;i<4;i++){
        for(int j =0;j<4;j++){
        cout<<result[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
    
