#include<iostream>
using namespace std;


void printzeroOne(int arr[],int size){
    // initalising both with 0 because we have to start finding in the array till now we didn't know.
    int zerocount = 0;
    int onecount = 0;
    for (int i = 0; i < size; i++)
        {
            if (arr[i] == 0)
            {
                zerocount++;
            }
            if (arr[i] == 1)
            {
                onecount++;
            }
            
        }
        cout<<"ZeroCount: " <<zerocount<<endl;
        cout<<"OneCount: " <<onecount<<endl;
}
int main(){
    int arr [] = {0,0,0,1,1,0,1,0,1,0,1,0,1,1,1};
    //zero = 7
    //one = 8
    int zerocount = 0;
    int onecount = 0;
    int size = 15;
    printzeroOne(arr,size);

}