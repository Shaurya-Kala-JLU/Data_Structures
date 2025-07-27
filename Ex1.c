//Write a program to make array of all the even numbers between 0 and 20
#include <stdio.h>
int main(){
    int arr[11],ind=0;
    for(int i = 0; i<21;i++){
        if(i%2==0){
            arr[ind]=i;
            ind++;
        }
    }
    for(int i = 0; i<12;i++){
        printf("%d\n",arr[i]);
    }
}