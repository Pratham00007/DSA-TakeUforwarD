#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cout<<"enter no:";
    cin>>n;

    int d=0;        
        while (n>0){
                n=n/10;
                d+=1;
        };
        cout<<d;
}
