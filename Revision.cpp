//Basic Revision of Array
#include<iostream>
using namespace std;

int main(){
//     //Array Creation + Array Initialisation
//     // int arr[5] = {20,25,60,78,90};
//     int arr[5];

//     //Taking input in array
//     int n = 5;
//     cout<<"Enter the value: "<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"{";
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<",";
//     }
//     cout<<"}";

//1st problem statement
    // int arr[10];
    // int n = 6;
    // cout<<"Enter the value: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<2*arr[i]<<endl;
    // }
//2nd problem statement(Linear Search Concept).
    // int arr[6] = {2,4,6,8,10,12};
    // int target = 11;
    // bool flag = 0;
    // //0 ->not found
    // //1 ->found
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == target)
    //     {
    //         flag = 1;
    //         break;
    //     }
        
    // }
    // if (flag == 1)
    // {
    //     cout<<"Element found";
    // }
    // else{
    //     cout<<"Element not found";
    // }
    
    // 2 problem statement

    // int arr[5];
    // int n = 5;
    // cout<<"Enter the values: "<<endl;
    //For taking Input in the array(5)
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    //Print total sum in Array
    // int sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum = sum + arr[i];
        
    // }
    // cout<<"Total Sum is: "<<sum;
    
    //Linear Search in Array
    
    int arr[5]={2,4,6,10,10};
    int n = 5;
    int target = 11;

    //1st method
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i]==target)
    //     {
    //         cout<<"Target found"<<endl;
    //         break;
    //     }
    //     else{
    //         continue;
    //     }
        
    // }

    //2nd method

    // bool flag = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i]==target)
    //     {
    //         flag = 1;
    //     }
    
    // }
    // if (flag == 1)
    // {
    //     cout<<"Target Found"<<endl;
    // }
    // else{
    //     cout<<"Target Not found"<<endl;
    // }


}