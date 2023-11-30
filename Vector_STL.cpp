#include<iostream>
using namespace std;

void fun(int arr[],int n){
    cout<<"Array Elements are: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}
int main(){
    // Static Memory Allocation
    // int arr[5] = {1,2,3,4,5};
    // fun(arr,5);

    //Dynamic Memory Allocation
    
    int n;
    cin>>n;
    //Dynamic Array
    int *arr = new int[n]; // each element would be 0 or garbage.
    for (int i = 0; i < n; i++)
    {
        int data;
        cin>>data;
        arr[i]=data;
    } // yha pe 0 to n-1 index tk value daal gyi..
    //Let me try to insert more items then we will not be able to do so that's why we use STL.
    
    fun(arr,n);

}