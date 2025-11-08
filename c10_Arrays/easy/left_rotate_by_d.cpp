#include<bits/stdc++.h>
using namespace std;

int rotate(int arr[],int n,int d){
    d=d%n;
    // for condition when d > size of array
    int arr2[d];

    for(int i=0;i<d;i++){
        arr2[i]=arr[i];
    }
    // int temp=d;
    // for(int i=1;i<=n-d;i++){
    //     arr[i-1]=arr[temp];
    //     temp++;
    // }
    // int m=0;
    // for (int j=n-d;j<n;j++){
    //     arr[j]=arr2[m];
    //     m++;
    // }

    // optimized 

    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }

    for(int i=n-d;i<n;i++){
        arr[i]=arr2[i-(n-d)];
    }

    cout<<"After Left rotate by "<<d<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

         
}





int optimal_rotate(int arr[],int n,int d){
    // method 3 array reversal optimal in space complexity O(1) but time complexity  O(2n)

    // by default reverse function user
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);


    cout<<"After Left rotate by "<<d<<endl;
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

    int d;
    cout<<"Enter the value by which rotaion you want";
    cin>>d;
    optimal_rotate(arr,n,d);
}