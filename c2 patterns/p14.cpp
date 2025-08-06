/*
ABCDE
ABCD
ABC
AB
A
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cout<<"Enter Number:";
    cin>>a;
    for (int i=0;i<a;i++){
        for(int j=0;j<a-i;j++){
            cout<<char(j+65);
        }
        cout<<endl;
    }
}