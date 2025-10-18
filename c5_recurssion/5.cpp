#include <bits/stdc++.h>
using namespace std;


/*
Sum of First N Numbers

Given an integer N, return the sum of first N natural numbers. Try to solve this using recursion.


Examples:
Input : N = 4

Output : 10

Explanation : first four natural numbers are 1, 2, 3, 4.

Sum is 1 + 2 + 3 + 4 => 10.

*/
int prt_n(int i,int j){
    if (i<1){
        return(j);
    }
    j=j+i;    
    prt_n(i-1,j);
    
    
}


int main(){
    int num;
    cout<<"Enter number";
    cin>>num;
    cout<<prt_n(num,0);
}