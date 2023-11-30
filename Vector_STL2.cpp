#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>v){
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout<< v[i] <<endl;
    }
    
}
//In Vector, don't tell size of vector(kind of dynamic array).
//Just keep inserting, it will manage the allocations.
int main(){
    vector<int>v; //Array hi h..
    //Insert
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    print(v);
}