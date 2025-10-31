// move zeros to end and maintain the digits

#include<bits/stdc++.h>
using namespace std;

int replaced(int arr[],int n){

    for(int j=0;j<n-1;j++){
        for(int k=0;k<n-j-1;k++){
        if (arr[k]==0 && arr[k+1]!=0){
            swap(arr[k],arr[k+1]);
        }
    }
    }
    for(int j=0;j<n;j++){
        cout<<arr[j];
    }

}

int main(){
    int n;
    cout<<"enter number of elements";
    cin>>n;

    int arr[n];
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }

    replaced(arr,n);
}