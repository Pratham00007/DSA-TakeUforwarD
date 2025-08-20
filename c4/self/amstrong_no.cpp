// cube of every digit sum is no itself
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cout<<"enter no:";
    cin>>x;

    
    long j=x;
    long d=0;
    while (j!=0){
        d= d+pow((j%10),3);       
        j=j/10;
        if (d>INT_MAX || d< INT_MIN){ // expected case for overflow
            cout<< 0;
        }
    }

  
    if (d==x){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    

} 