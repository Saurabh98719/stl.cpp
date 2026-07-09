// #include<iostream>
// #include<list>
// using namespace std;
// int main(){
//     list<int>l;
//     l.push_back(2);
//     l.push_back(6);
//     l.push_back(1);
// for(int val : l){
//         cout<<val<<" ";
//     }
//     cout<<"front"<<l.front()<<endl;

// }

#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l;
    l.push_back(2);
    l.push_back(6);
    l.push_back(1);
for(int val : l){
        cout<<val<<" ";
    }
    cout<<l.front();
}