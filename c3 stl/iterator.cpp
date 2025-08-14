#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);
    

    vector<int>::iterator it=v.begin();
    cout<<*(it)<<endl;
    it++;
    cout<<*(it);

    vector<int>::iterator it=v.end();
    // vector<int>::iterator it=v.rend();
    //r= reverse, which is for reverse ; here rend mean at before 1 
    // vector<int>::iterator it=v.rbegin();
    // it will at top right and also on doing i++ it goes from rhs to lhs

    cout<<v[0]<<" "<<v.at(0);
    cout<<v.back()<<" ";
}