// #include<iostream>
// #include<list>
// using namespace std;
// int main(){
//     list<int>l = {2,4,7,12};
//     for(int val: l){
//         cout<<val<<" ";
//     }
// }
// #include<iostream>
// #include<list>
// using namespace std;
// int main(){
//     list<int>l = {2,4,7,12};
//     for(int val: l){
//         cout<<val<<" "<<endl;
//     }
// }

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
// }

#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l;
    l.push_back(2);
    l.push_back(6);
    l.push_back(1);
    l.emplace_back(3);
    l.push_back(12);
    l.emplace_back(15);
for(int val : l){
        cout<<val<<" ";
    }
}