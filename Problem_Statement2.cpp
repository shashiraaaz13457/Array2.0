#include<iostream>
using namespace std;

int main(){
    //Create Array
    int arr[5];

    //Input
    cout<<"Enter the Input: "<<endl;
    int n=5;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = arr[i] + sum;
        
    }
    cout<<"Sum is : "<<sum;
    
}