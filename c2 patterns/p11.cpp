/*
1
01
101
0101
10101
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cout<<"Enter no of star you want";
    cin>>a;

   int start=1;
   for(int i=0;i<a;i++){
    if (i%2==0){start=1;}
    else {start=0;}

    for(int k=0;k<=i;k++){
        cout<<start;
        start=1-start;
    }
    cout<<endl;
   }

}