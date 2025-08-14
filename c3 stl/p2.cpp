#include<bits/stdc++.h>
using namespace std;
// vector allow increasing the space while array doen't 
int main(){
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2); // its more fast and efficient
    
    vector<pair<int,int>> v2;
    v2.push_back({5,4});
    
    // creating a vector of sizze 5 with 100 values
    vector<int>v3(5,100);

    // vector of size 5 with 0 values
    vector<int>v4(5);

    // copy vector v4 in v5
    vector<int>v5(v4);
}