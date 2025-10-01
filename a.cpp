#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter length";
    int n;
    cin>>n;
    int arr[n];
    for (int j=0;j<n;j++){
        cin>>arr[j];
    }
    cout<<"printing";
    cout<<"[";for (int i =0;i<n;i++){
        if(i==n-1){
            cout<<arr[i]<<"]";
        }else
        cout<<arr[i]<<",";
        
    }
}