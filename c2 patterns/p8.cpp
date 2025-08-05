/*
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

    for (int k=0;k<a;k++){
         for(int l=k;l>0;l--){
            cout<<" ";

        };
        for (int j=((a*2-1)-(2*k));j>0;j--){
            cout<<"*";
        };
       
        cout<<endl;
    }
}