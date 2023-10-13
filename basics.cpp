#include<iostream>
using namespace std;

int main(){

    //Array Creation

    // int arr[101];
    // char arr[20];
    // bool arr[250];
    // long num[1000];
    // short snum[12];

    // cout<<"Array Created Successfully"<<endl;

    // int a = 5;
    // cout<<"Size of a: "<<sizeof(a)<<endl;
    // cout<< "Address of a: "<< &a <<endl;

    // int arr[10];
    // cout<<"Size of arr: "<<sizeof(arr)<<endl;
    // cout<< "Base address of Arr is: "<< &arr <<endl;
    // cout<< "Base address of Arr is: "<< arr <<endl;

    //Array Initialization

    // int arr[] = {2,3,4,5,6};
    // int brr[5] = {5,8,5,9,9}; 
    // int crr[5] = {5,8}; 
    // int drr[2] = {5,8,5,9,9}; //error

    //Indexing

    // int arr[5] = {2,8,5,6,1};

    // int n = 5;
    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // cout<<arr[2];

    //Printing Array
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    //Taking input in an Array
    int arr[5];
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the value for index "<<i<<": ";
        cin>>arr[i];
    }
    cout<<"Printing the array "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}