#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cout<<"enter no:";
    cin>>n;
    int j=n;

    long long d=0;    // to avoid overflow     
        while (n>0){
            d=(d*10)+(n%10);
            n=n/10;
                
        };
    if (d==j){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
