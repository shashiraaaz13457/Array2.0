#include<iostream>
using namespace std;

int main(){
    int arr[5] = {2,4,6,8,10};
    int target = 10;
    int n = 5;
    bool flag = 0;
    // 0 -> not foundd
    // 1 -> found

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            // cout<<"Element is found"<<endl;
            flag = 1;
            break;
        }
        
    }
    if (flag == 1)
    {
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    
}