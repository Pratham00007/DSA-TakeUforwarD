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
    
    for (int i=0;i<a*2-1;i++){
        for(int k=0;k<a*2-1;k++){
            
            int top=i;
            int left=k;
            int right=(2*a-2)-k;
            int bottom=(2*a-2)-i;

            cout<< a-min(min(top,bottom),min(left,right));
        }
        cout<<endl;
    }
  
        
}