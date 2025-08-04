#include<bits/stdc++.h>
using namespace std;

string dosth(string name){
    // pass by value so it will create a copy of name and do its work there
    name[0]='t';
    return name;
    // cout<<name<<endl;
}

string  dosth_ref(string &name){
    name[0]='t';
    return name;
}

int main(){
    string s="raj";
    string k=dosth(s);
    cout<<k;
    // will print raj bcs pass by value
    cout<<s<<endl;
     
    cout<<"now pass by ref"<<endl;


    // pass by ref
    string l=dosth_ref(s);
    cout<<l;
    // will print taj bcs pass by refrence
    cout<<s;
}

// remeber arrays are always pass by refrence automatic