//wap to delete an element from an array 
#include <iostream>
using namespace std;
int main(){
    int arr[5],input,ind;
    cout<<"Enter elements of the array: ";
    for (int i=0; i<5; i++){
        cin>>arr[i];
    }
    cout<<"Enter the element you want to delete: ";
    cin>>input;
    for (int i = 0; i < 5; i++)
    {
        if(input==arr[i]){
            ind=i;
            break;
        }
    }
    for (int i=ind; i<5; i++){
        arr[i]=arr[i+1];
    }
    arr[4]=NULL;
    for (int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}