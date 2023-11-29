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

//Ques2: Minimum Number in an Array
int minimumNO(int arr[],int n){
    int minAns = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<minAns)
        {
            minAns = arr[i];
        }
        
    }
    return minAns;
    
}

//Ques3: Reverse an Array(2-pointer Approach)
void Reverse(int arr[],int n){
    int left = 0;
    int right = n-1;
    for (int i = 0; i < n; i++)
    {
        if (left<=right)
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}

//Ques4: Extreme Print in an Array

void Extreme(int arr[],int n){
    int left = 0;
    int right = n-1;
    for (int i = 0; i < n; i++)
    {
        if (left < right)
        {
            cout<<arr[left]<<" ";
            cout<<arr[right]<<" ";
            left++;
            right--;
        }
        else if (left == right)
        {
            cout<<arr[left];
            break;
        }
        
        
    }
    
}

//Ques5: Find Unique Element in an Array.

int UniqueElement(int arr[], int n){
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
       ans = ans^arr[i];
        
    }
    return ans;
}
//Ques 6: All Ordered Pairs Possible..
void OrderedPairs(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i]<<","<<arr[j]<<endl;
        }
        
    }
    
}
//Ques 7: All triplets Possible..
void Triplets(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
                
            }
            
        }
        
    }
}

int main(){
    // int arr[10] = {0,1,0,1,1,1,0,0,0,0};
    // int arr[10] = {2,40,10,35,89,54,68,30,11,0};
    // int arr[10] = {2,40,40,89,89,68,30,68,30};
    int arr[4]= {10,20,30,40};
    int n = 4;

    // countZeroOne(arr,n);
    // int minimum = minimumNO(arr,n);
    // cout<<"Minimum Number in the Array is: "<<minimum<<endl;
    // Reverse(arr,n);
    // Extreme(arr,n);
    // int Unique = UniqueElement(arr,n);
    // cout<<"Unique Element is: "<<Unique<<endl;
    // OrderedPairs(arr,n);
    Triplets(arr,n);
   
    
}