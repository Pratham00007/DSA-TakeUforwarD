#include <bits/stdc++.h>
using namespace std;

int insertion(int arr[],int n){
    for(int i=0;i<n;i++){

        // mine

        // for(int j=1;j<n-i;j++){
        //     if(arr[j]<arr[j-1]){
        //         int temp=arr[j];
        //         arr[j]=arr[j-1];
        //         arr[j-1]=temp;
        //     }
        // }

        // to save tc in best case for best case O(n)

        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;

            j--;
        }
    }
    cout<<"Sorted Array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number of elemnts";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    insertion(arr,n);

}