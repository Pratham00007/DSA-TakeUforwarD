/*
1
12
123
1234
12345
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
     int a;
    cout<<"Enter no of star you want";
    cin>>a;

    for(int i=0;i<a;i++){
        for(int k=0;k<=i;k++){
            cout<<(k+1);
        }
        cout<<endl;
    }
}