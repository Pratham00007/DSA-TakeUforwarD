/*
*****
****
***
**
*
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
     int a;
    cout<<"Enter no of star you want";
    cin>>a;

    for(int i=0;i<a;i++){
        for(int k=a-i;k>0;k--){
            cout<<("*");
        }
        cout<<endl;
    }
}