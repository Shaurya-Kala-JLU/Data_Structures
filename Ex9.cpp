//Linear Search
#include<iostream>
using namespace std;
int main(){
int arr[15]={1,2,3,4,5,6,7,8,9,10},input;
    cout<<"Enter element to find: ";
    cin>>input;
    for (int i = 0; i < 15; i++)
    {
        if(input==arr[i]){
            cout<<"Element found at index: "<<i<<"\n";
        }
        else{
            continue;
        }
    }
    return 0;
}