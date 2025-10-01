// gratest common divisor-> max no divide any 2 no

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter the no.";
    cin>>n1;
    cout<<"Enter the no.";
    cin>>n2;
    int gcd=1;
    for (int i=1;i<=n1;i++){
        if (n1%i==0 and n2%i==0){
            gcd=i;
        }
    }
    cout<<gcd;
}    

// tc = minimum(n1,n2)