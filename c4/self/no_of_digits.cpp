#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cout<<"enter no:";
    cin>>n;

    int d=0;        
        while (n>0){
                n=n/10;
                // whenever divide log comes base is no by which you are dividing
                d+=1;
        };
        cout<<d;
}

//  Time Complexity = Big O of  log base 10 of n
// 
