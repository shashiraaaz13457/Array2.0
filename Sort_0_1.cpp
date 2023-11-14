#include<iostream>
using namespace std;

void Sort(int arr[],int n){
    int zerocount = 0;
    int onecount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zerocount++;
        }
        if (arr[i]== 1)
        {
            onecount++;
        } 
    }

    //Now place ascending order wise first 0 then 1.
    // int i ;
    // for (i = 0; i<zerocount; i++)
    // {
    //     arr[i] = 0;
    // }
    // for (int j = i; j < n; j++)
    // {
    //     arr[j] = 1;
    // }

    //Easy Way
    int index = 0;
    while (zerocount--)//This means jaise hi zerocount 0 hogi loops stops.. 
    {
        arr[index] = 0;
        index++;
    }
    while (onecount--) 
    {
        arr[index] = 1;
        index++;
    }
    

}
int main(){
    int arr[] = {0,1,0,1,1,0,0,0,0};
    int n = 9;

    Sort(arr,n);
    
    //Printing array
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    

}