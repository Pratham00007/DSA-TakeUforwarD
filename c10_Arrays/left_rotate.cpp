#include<bits/stdc++.h>
using namespace std;

int rotate(int arr[],int n){
    int temp=arr[0];
    for(int i=1;i<n-1;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;

    cout<<"After Left rotate by 1"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter number of element ";
    cin>>n;
    int arr[n];
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    rotate(arr,n);
}