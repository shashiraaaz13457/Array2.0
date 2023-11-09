#include<iostream>
using namespace std;
//Solve this concepts own your own
//right shift
void ShiftElements(int arr[], int n){
    int temp = arr[n-1]; 
    for (int i = n-1; i > 0; i--)
    {
        arr[i]= arr[i-1];
    }
    //copy temp to the first index.
    arr[0] = temp;
    
}
//Left Shift
void ShiftElements2(int arr[], int n){
    int temp = arr[0]; 
    for (int i = 0; i < n; i++)
    {
        arr[i]= arr[i+1];
    }
    //copy temp to the first index.
    arr[n-1] = temp;
    
}
int main(){
    int arr[] = {10,20,30,40,50,60};
    int n = 6;

    ShiftElements2(arr,n);
    // ShiftElements(arr,n);

    //print array
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    
}