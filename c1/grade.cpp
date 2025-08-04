#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the Marks: ";
    cin>>marks;

    if(marks>=80){
        cout<<"A";
    }
    else if(marks<=79 and marks>=60){
        cout<<"B";
    }
    else if(marks<=59 and marks>40){
        cout<<"C";
    }
    else if(marks<=39 and marks>=20){
        cout<<"D";
    }
    else{
        cout<<"F";
    }
}