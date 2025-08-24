//dynamic array bwithout malloc
#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter array size:";
    cin>>size;
    int*  Array = new int[size];
    for(int i=0; i<size; i++){
        Array[i]= i*10;
        cout<<Array[i]<<" ";
    }
    cout<<"\n";
    delete[]Array;
    Array= nullptr;
    return 0; 
}
