#include<iostream>
using namespace std;

//Call by Reference

int incrementBy1(int &k){
    k = k+1;
    // cout<<n<<endl;
    return k;
}
int main(){
    int n;
    cin>>n;
    incrementBy1(n); 
    cout<<n<<endl;
    
}