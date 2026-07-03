#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    vec.emplace_back(2);
    vec.emplace_back(3);
    vec.emplace_back(7);
    vec.pop_back();
    for(int val: vec){
    cout<<val<<" ";
}
}
