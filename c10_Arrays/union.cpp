// move zeros to end and maintain the digits

#include<bits/stdc++.h>
using namespace std;

int union_arrays(int arr1[],int n1,int arr2[],int n2){
    int arr3[n1+n2];
    for(int i=0;i<n1;i++){
        arr3[i]=arr1[i];
    }
    for (int j=n1;j<n1+n2;j++){
        arr3[j]=arr2[j-n1];
    }

    sort(arr3,arr3+n1+n2);
cout<<"After merging"<<endl;

    for(int k=0;k<n1+n2;k++){
        cout<<arr3[k]<<endl;
    }
}

int main(){
    int n1;
    cout<<"enter number of elements in array 1 ";
    cin>>n1;

    int arr1[n1];
    for(int j=0;j<n1;j++){
        cin>>arr1[j];
    }

    int n2;
    cout<<"enter number of elements in array 2 ";
    cin>>n2;
    
    int arr2[n2];
    for(int j=0;j<n2;j++){
        cin>>arr2[j];
    }
    
union_arrays(arr1,n1,arr2,n2);
    
}