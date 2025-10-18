#include <bits/stdc++.h>
using namespace std;


/*
Print N to 1 using Recursion

Given an integer n, write a function to print all numbers from n to 1 (inclusive) using recursion.

You must not use any loops such as for, while, or do-while.
The function should print each number on a separate line, in decreasing order from n to 1

*/
void prt_n(int i){
    if (i<1){
        return;
    }
    cout<<i<<endl;
    
    prt_n(i-1);
    
}


int main(){
    int num;
    cout<<"Enter number";
    cin>>num;
    prt_n(num);
}