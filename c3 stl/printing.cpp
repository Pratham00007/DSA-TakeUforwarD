#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);
    

    cout<<v[0]<<endl<<v.at(0)<<endl;
    cout<<v.back()<<endl;

    // print entire vector
    for (vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }

    cout<<endl;

    // auto take anything without datatype
    // simpler of earlier are
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    // more shorter
    for(auto it:v){
        cout<<it<<" ";
    }
}