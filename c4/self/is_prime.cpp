#include<bits/stdc++.h>
using namespace std;
string isprime(int n){
    for (int i=2;i<pow(n,0.5);i++){
        if (n%i==0){
            return "false";
        }
    } 
    return "true";  

}
int main(){
    int x;
    cout<<"enter no:";
    cin>>x;

    cout<<isprime(x);

    

} 