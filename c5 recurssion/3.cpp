#include <bits/stdc++.h>
using namespace std;

/*
Print 1 to N using recursion

Given an integer n, write a function to print all numbers from 1 to n (inclusive) using recursion.

You must not use any loops such as for, while, or do-while.
The function should print each number on a separate line, in increasing order from 1 to n.

Examples:
Input: n = 5

Output:

1  

2  

3  

4  

5

*/


int j=1;
void prt_n(int i){
    if (j>i){
        return;
    }
    cout<<j<<endl;
    j++;
    prt_n(i);
    
}


int main(){
    int num;
    cout<<"Enter number";
    cin>>num;
    prt_n(num);
}