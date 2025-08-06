/*
1      1
12    21
123  321
12344321
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cout<<"Enter Number:";
    cin>>a;

    for (int i=0;i<a;i++){
        for (int j=0;j<=i;j++){
            cout<<j+1;
        }
        for(int k=((a+2)-(2*i));k>0;k--){
            cout<<" ";
        }
        for(int l=i+1;l>0;l--){
            cout<<l;
        }
        cout<<endl;
    }
}