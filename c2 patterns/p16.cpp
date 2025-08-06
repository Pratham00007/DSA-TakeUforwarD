/*
   A
  ABA
 ABCBA
ABCDCBA
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cout<<"Enter Number:";
    cin>>a;
    
    for (int i=0;i<a;i++){
        for(int j=a-1-i;j>0;j--){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<char(k+65);
        }
        for(int l=i;l>0;l--){
            cout<<char(l+64);
        }
        cout<<endl;
    }
}