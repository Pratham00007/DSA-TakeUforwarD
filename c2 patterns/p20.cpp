/*
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cout<<"Enter Number:";
    cin>>a;
    
    for (int i=0;i<a/2;i++){
        for(int j=0;j<=i;j++){
        cout<<"*";
        }
        for(int k=(a-2)-(2*i);k>0;k--){
            cout<<" ";
        }
         for(int j=0;j<=i;j++){
        cout<<"*";
        }
        cout<<endl;
    }

// lower

    for(int i=1;i<a/2;i++){
        for(int j=a/2-i;j>0;j--){
            cout<<"*";
        }
        for(int k=2*i;k>0;k--){
            cout<<" ";
        }
        for(int j=a/2-i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
  
        
}