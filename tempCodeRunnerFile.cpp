#include<iostream>
#include<vector>    
using namespace std;
int main(){
    pair<int,pair<char,int>>p = {3,{'a','4'}};
    cout<<p.first<<" ";
    cout<<p.second.first<<" ";
    cout<<p.second.second;

}

