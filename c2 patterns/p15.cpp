/*
A
BB
CCC
DDDD
EEEEE
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cout<<"Enter Number:";
    cin>>a;
    int m=0;
    for (int i=0;i<a;i++){
        for(int j=0;j<=i;j++){
            cout<<char(m+65);
        }
        m+=1;
        cout<<endl;
    }
}