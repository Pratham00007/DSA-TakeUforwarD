// move zeros to end and maintain the digits

#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[],int n,int e){
    for(int i=0;i<n;i++){
        if (arr[i]==e){
            return i;
        }
    }
    return -1;

}
int main(){
    int n;
    cout<<"enter number of elements";
    cin>>n;

    int arr[n];
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    int e;
    cout<<"Enter Element to be search";
    cin>>e;

    cout<<linear_search(arr,n,e);
}