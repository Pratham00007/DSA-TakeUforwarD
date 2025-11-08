#include<bits/stdc++.h>
using namespace std;

bool is_sorted(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }    
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter number of element ";
    cin>>n;
    int arr[n];
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }

    cout<<is_sorted(arr,n);

}