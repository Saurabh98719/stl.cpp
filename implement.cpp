#include<iostream>
#include<map>
using namespace std;
int main (){
    map<string,int>m;
    m["tv"] = 100000;
    m["mobile"] = 5000;
    m["laptop"] = 40000;
    for(auto val: m){
        cout<<val.first<<" ";
        cout<<val.second<< endl;
    }
}