//Now Some Questions Based on Array..
#include<iostream>
using namespace std;
#include<limits.h>

//Ques1: Count 0's and 1's

void countZeroOne(int arr[],int n){
    int countzero = 0;
    int countone = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            countzero++;
        }
        if (arr[i] == 1)
        {
            countone++;
        }
        
    }
    cout<<"Zero Appeared : " <<countzero<<endl;
    cout<<"One Appeared : " <<countone<<endl;
}

//Ques2: Minimum Number in an Array..
int main(){
    int arr[10] = {0,1,0,1,1,1,0,0,0,0};
    int n = 10;

    countZeroOne(arr,n);
   
    
}