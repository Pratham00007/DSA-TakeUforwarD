#include<bits/stdc++.h>
using namespace std;


// allow operation from both side
int main(){
    deque<int> ls;
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
cout<<"poping"<<endl;
    ls.pop_back();
    ls.pop_front();

    for(auto v:ls){
        cout<<v<<endl;
    }

cout<<".back"<<endl;

    ls.back();
    ls.front();

    for(auto v:ls){
        cout<<v<<endl;
    }

}