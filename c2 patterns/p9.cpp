/*
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cout<<"Enter no of star you want";
    cin>>a;

    for (int i=0;i<a;i++){
        for (int j=a-i-1;j>0;j--){
            cout<<" ";
        }
        for(int k=i*2+1;k>0;k--){
            cout<<"*";
        }
        cout<<endl;

    }
    for(int i=0;i<a;i++){
        for(int k=i;k>0;k--){
            cout<<" ";
        }
        for(int j=((a*2-1)-(2*i));j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}