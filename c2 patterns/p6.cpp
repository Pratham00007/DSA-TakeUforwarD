/*
12345
1234
123
12
1
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
     int a;
    cout<<"Enter no of star you want";
    cin>>a;

    for(int i=0;i<a;i++){
        for(int k=1;k<=a-i;k++){
            cout<<(k);
        }
        cout<<endl;
    }
}