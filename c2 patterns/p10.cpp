/*
*
**
***
****
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

    for (int i=1;i<=a;i++){
        for (int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
        
    }
    for (int i=0;i<a-1;i++){
        for (int j=a-1-i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }

}