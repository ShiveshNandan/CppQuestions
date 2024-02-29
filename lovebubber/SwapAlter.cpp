#include <iostream>
using namespace std;

void printarr(int arr[], int size){
     for (int i = 0; i < size; i=i+1)
    {
        cout<<arr[i]<<" ";
    }
}

void altSwap(int arr[], int size){
    for (int i = 0; i < size; i=i+2)
    {
        if (i+1 < size)
        {
            int tempnum = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = tempnum;
        }
    }
}

int main () {
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    
    printarr(arr , size);
    cout<<endl;

    altSwap(arr, size);

    printarr(arr , size);
    
}