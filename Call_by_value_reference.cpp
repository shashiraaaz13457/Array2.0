#include<iostream>
using namespace std;

//Call by value

int incrementBy1(int n){
    n = n+1;// yha pe 5 hogya h but main function me woh value nhi gya(call by value)
    cout<<n<<endl;
    return n;
}
int main(){
    int n;
    cin>>n;
    incrementBy1(n); //yha same n print hoga input wala not incremented value.
    cout<<n<<endl;
    // n = incrementBy1(n);
}