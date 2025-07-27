//make a array and then sum all its values
#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10},sum=0;
    for(int i = 0; i<12;i++){
        sum=sum+arr[i];
    }
    printf("The sum will be %d\n",sum);
}