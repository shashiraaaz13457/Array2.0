//Don't Print Repeated number
#include<iostream>
using namespace std;

//don't repeat the value inside array

int main(){
    int arr[7] = {1,1,1,3,5,4,5}; // 1,2,3,4,5
    int n = 7, count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]==arr[j]){
                
            }
        }

    }
    
    
}