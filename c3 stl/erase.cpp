#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    // {10,20,30}
    v.erase(v.begin()+1); //erase 20

    //{10,20,30,40,50}
    v.erase(v.begin()+2,v.begin()+4); //remove the 20 and 30 //n-1 
    
}