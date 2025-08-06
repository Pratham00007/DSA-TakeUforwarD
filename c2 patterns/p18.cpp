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
    
    for (int i=0;i<a;i++){
        for(int j=i;j>=0;j--){
            cout<<char(64+a-j);
        }
        cout<<endl;
    }
}
// j=0 10 210 3210