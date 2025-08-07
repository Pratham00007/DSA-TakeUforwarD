/*
****
*  *
*  *
****
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cout<<"Enter Number:";
    cin>>a;
    
    for (int i=0;i<a;i++){
        if ( i == 0 or i==a-1){
            for(int j=0;j<a;j++){
                cout<<"*";
            }
        }
        else{
        for(int k=0;k<a;k++){
            if(k==0 or k==a-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
    }
        cout<<endl;
    }
  
        
}