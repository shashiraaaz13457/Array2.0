#include<iostream>
using namespace std;

int main(){
    //Array Creation
    int arr[10];
    //Take Input in that Array
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    //Double-up each value of array
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] * 2;
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}