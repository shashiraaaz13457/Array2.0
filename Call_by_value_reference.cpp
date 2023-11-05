#include<iostream>
using namespace std;

//Call by value

int incrementBy1(int n){
    n = n+1;// yha pe 5 hogya h but main function me woh value nhi gya(call by value)
    // cout<<n<<endl;
    return n;
}
int main(){
    int n;
    cin>>n;
    incrementBy1(n); //yha same n print hoga kyuki call by value me copy jata h aur usse function wale scope ke andr change hoga bhr nhi..
    // n = incrementBy1(n); //Aur yha incremented n print hoga kyuki hm yha variable me store kr rhe h function ki value ko.
    cout<<n<<endl;
}