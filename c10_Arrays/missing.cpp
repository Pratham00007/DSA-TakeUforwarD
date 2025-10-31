// Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. 
// Find the number(between 1 to N), that is not present in the given array.

// Q- just insert the unique element in the same array and after rest elemnts same in array
#include<bits/stdc++.h>
using namespace std;

int missing(int arr[],int n){

    for(int i=0;i<n-2;i++){
        if ((arr[i+1]-arr[i])>1){
            return arr[i]+1;
           
        }
    }
    return arr[n-1]+1;
            

}

int main(){
    int n;
    cout<<"Enter number of elements";
    cin>>n;
    int arr[n-1];
    for(int j=0;j<n-1;j++){
        cin>>arr[j];
    }

    cout<<"Missing value is "<<missing(arr,n);

}