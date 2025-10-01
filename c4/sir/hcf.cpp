/*
Eucledian algo :
n1>n2
do (larger%smaller,smaller)until one of them become 0 the other no left is gcd
ex:
gcd(4,2)= (0,2)-> 2 ans
*/

// NOTE: whenever there is division there time complexity is in log

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter the 1st no: ";
    cin>>n1;
    cout<<"Enter the 2nd no: ";
    cin>>n2;

    while(n1>0 and n2>0){
        if (n1>n2){
            n1=n1%n2;

        }else{
            n2=n2%n1;
        }

    }
    if(n1==0){
        cout<<"GCD is "<<n2;
    }else{
        cout<<"GCD is "<<n1;
    }
}

// tc : log bases phie(minimum(n1,n2))

// as % is changing acc to n1 and n2 so phie is the base