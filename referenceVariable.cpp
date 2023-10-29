#include<iostream>
using namespace std;

int main(){
    int n = 5; //original variable
    int &k = n; //nickname(reference variable)
    int &c = n; //nickname(reference variable)
    cout<<n<<endl;
    cout<<c<<endl;
    cout<<k<<endl; 
    // They all give same value.
    k++;
    cout<<n<<endl;
    cout<<c<<endl;
    cout<<k<<endl; 

    // int &t =  6; //You can't do this because reference variable should have its orignal variable

}