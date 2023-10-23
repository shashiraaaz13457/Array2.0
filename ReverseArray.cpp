// Even Array Reversing 

#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){
    int left = 0;
    int right = size-1;

    //Using while loop

    while (left <= right)
    {
        swap(arr[left],arr[right]);
        left++;
        right--;
    }

    //Using for loop

    // for (int left = 0,right = size-1; left <= right; left++,right--)
    // {
    //     swap(arr[left],arr[right]);
    // }
    

    //Printing Array
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}

int main(){
    int arr[6]= {10,20,30,40,50,60};
    int size = 6;

    reverseArray(arr,size);
}