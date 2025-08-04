#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "striver";
    cout<<s[0]<<"\n";
    cout<<s[s.size()-1]<<"\n";

    // s[1]="z"; will give erro need to assign char
    s[1]='z';
    cout<<s[1];

}