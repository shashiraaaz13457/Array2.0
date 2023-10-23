#include<iostream>
#include<limits.h>
using namespace std;

int findMinimumInArray(int arr[],int size){
    int minAns = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minAns)
        {
            minAns = arr[i];
        }
        
    }
    return minAns;
    
}

int main(){
    int arr[] = {10,8,31,4,3,1,-51};
    int size = 7;

    int minimum = findMinimumInArray(arr,size);
    cout<<"Minimum NO in Array is: "<<minimum<<endl;
}