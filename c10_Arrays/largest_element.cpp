#include<bits/stdc++.h>
using namespace std;

int Largest(int arr[],int n){
    int ans=arr[0];
    for(int i=0;i<n;i++){
        if(ans<arr[i]){
            ans=arr[i];
        }
    }

    cout<<"Largest element of array is "<<ans<<endl;
}

int main(){
    int n;
    cout<<"Enter number of element";
    cin>>n;
    int arr[n];
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }

    Largest(arr,n);
}