/*
****
****
****
**** 
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cout<<"Enter no of star you want";
    cin>>a;

    for (int j=0;j<a;j++){
        for(int k=0 ;k<a;k++){
            cout<<("*");
        }
        cout<<endl;
    }
}