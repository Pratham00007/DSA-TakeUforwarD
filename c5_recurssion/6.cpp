/*
Factorial of N numbers
*/

#include <bits/stdc++.h>
using namespace std;

int fact=1;
int fact_1(int i){
    
    if (i<1){
        return(fact);
    }
    fact=fact*i    ;
    fact_1(i-1);    
    
}

//method 2
int fact_2(int i){
    if (i==1 || i==0){
        return 1;
    }
    return i*fact_2(i-1);
}


int main(){
    int num;
    cout<<"Enter number";
    cin>>num;
    cout<<fact_2(num);
}