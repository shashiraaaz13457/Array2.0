#include<iostream>
using namespace std;

void solve(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//Linear Search Concept
//Target Present -> True
//Target Absent -> False

bool LinearSearch(int arr[],int size,int target){
    for (int i = 0; i < size; i++)
    {
        if (target == arr[i])
        {
            return true;
        }
    }
    return false;
    
}

int main(){
    int arr[5] = {2,4,6,8,10};
    int size = 5;
    int target = 10;
    // solve(arr,size);
    bool ans = LinearSearch(arr,size,target);

    if (ans == 1)
    {
        cout<<"Target Found"<<endl;
    }
    else{
        cout<<"Target Not Found"<<endl;
    }
    
}