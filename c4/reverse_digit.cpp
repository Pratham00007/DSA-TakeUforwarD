#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cout<<"enter no:";
    cin>>x;

    
    long j=x;
    long d=0;
    while (j!=0){
        d= (d*10)+(j%10);       
        j=j/10;
        if (d>INT_MAX || d< INT_MIN){ // expected case for overflow
            return 0;
        }
    }
    return (int)d;
    

}