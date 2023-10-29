//Homework Question
#include<iostream>
#include<limits.h>
using namespace std;

int maxInArray(int arr[], int size){
    int maxNo = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxNo)
        {
            maxNo = arr[i];
        }
        
    }
    return maxNo;
    
}

int main(){
    int arr[5]= {10,100,30,40,50};
    int size = 5;

    int max = maxInArray(arr,size);
    cout<<"Maximum no in array is: "<<max <<endl;
}