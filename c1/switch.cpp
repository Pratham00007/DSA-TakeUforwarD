#include<bits/stdc++.h>
using namespace std;

int main(){
    int day;
    cout<<"Enter the Day";
    cin>>day;
    switch (day)
    {
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wednesday";
        break;    
    default: // agar koi case nhi
        cout<<"Invalid Day";
        break;
    }
}