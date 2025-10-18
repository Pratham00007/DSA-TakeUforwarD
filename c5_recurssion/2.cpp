// print name n times

#include<bits/stdc++.h>
using namespace std;

int c=0;
int n=0;
void n_name(){
    if (c==n){return;}
    cout<<"Raj"<<endl;
    c++;
    n_name();
    
}

// real learning recursion
void sr_n_name(int i,int j){
    if (i>j){
        return;
    }
    cout<<"Raj"<<endl;
    sr_n_name(i+1,j);

    // /tc=O(n)
    // sc=O(n)
}

// print linearly upto n
void lin_pr(int i,int j){
    if(i>j)return;
    cout<<i<<endl;
    lin_pr(i+1,j);

}

// print n to 1;
void rev(int i,int j){
    if (i>j){return;}
    cout<<j<<endl;
    rev(i,j-1);
}

// 1 to n using back tracking means in stack the last func call return then come back the print that
void b_n(int i){
    if(i<1){
        return;
    }
    b_n(i-1);
    cout<<i<<endl;
}

// rev using backtrack
void rev_b_n(int i,int j){
    if(i>j){
        return;
    }
    rev_b_n(i+1,j);
    cout<<i<<endl;
}

int main(){
    // cout<<"Enter number";
    // cin>>n;
    // n_name();

    // sr_n_name(1,3); // to print 3 times

    // lin_pr(1,5);

    // rev(1,5);
    // b_n(3);
    rev_b_n(1,3);
}