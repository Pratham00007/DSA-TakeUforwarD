#include<bits/stdc++.h>
using namespace std;


int Selection(int arr[],int n){
    for(int j=0;j<n-1;j++){
        int min_index=j;

        for (int i=j;i<n;i++){
        if(arr[i]<arr[min_index]){
            // Swaping
            int temp=arr[i];
            arr[i]=arr[min_index];
            arr[min_index]=temp;
        }
    }
    }

    cout<<"Sorted Array"<<endl;
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

   Selection(arr,n);
}