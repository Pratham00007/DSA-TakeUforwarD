/*
E
DE
CDE
BCDE
ABCDE
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cout<<"Enter Number:";
    cin>>a;
    
    for (int i=0;i<a/2;i++){
        for(int j=a/2-i;j>0;j--){
            cout<<"*";
        }
        
        for(int j=i*2;j>0;j--){
            cout<<" ";

        }
        for(int j=a/2-i;j>0;j--){
            cout<<"*";
        }
    
        
        cout<<endl;
    }

// lower half part

    for(int i=0;i<a/2;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
        
}
// j=0 10 210 3210