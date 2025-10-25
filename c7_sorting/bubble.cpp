#include<bits/stdc++.h>
using namespace std;

int Bubble(int arr[],int n){
    for(int x=n-1;x>=0;x--){
        int didSwap =0;
        for (int j=0;j<=x-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                didSwap+=1;
            }
        }
        if (didSwap==0){
            break;
        }
    }

    cout<<"sorted array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    cout<<"Enter no of elements";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   Bubble(arr,n);
}