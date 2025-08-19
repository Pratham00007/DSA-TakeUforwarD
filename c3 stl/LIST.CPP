#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> ls;
    //{2}
    ls.push_back(2);
    // {2,4}
    ls.emplace_back(4);
    // {5,2,4}
    ls.emplace_front(5);
    //  or
    ls.push_front(5);

    // all others of vector

    for(auto v:ls){
        cout<<v<<endl;
    }

}