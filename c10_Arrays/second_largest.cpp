// doing
// Cond without sorting
#include<bits/stdc++.h>
using namespace std;

int Sec_Largest(int arr[],int n){
    int FL=arr[0];
    for(int i=0;i<n;i++){
        if(FL<arr[i]){
            FL=arr[i];
        }
    }

    int SL=arr[0];
    for(int i=0;i<n;i++){
        if(SL<arr[i] && arr[i]!=FL){
            SL=arr[i];
        }
    }

    cout<<"Second Largest element of array is "<<SL<<endl;
}

int main(){
    int n;
    cout<<"Enter number of element ";
    cin>>n;
    int arr[n];
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }

    Sec_Largest(arr,n);
}