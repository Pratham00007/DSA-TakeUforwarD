// Q- just insert the unique element in the same array and after rest elemnts same in array
#include<bits/stdc++.h>
using namespace std;

// another method bad approach store in set then in array place

bool remove_dub(int arr[],int n){

   int j=0;
   for(int i=0;i<n;i++){
    if(arr[j]!=arr[i]){
        j++;
        arr[j]=arr[i];
    }
    }

cout<<"removed"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}

cout<<"unique elemets are "<<j+1<<endl;

}

int main(){
    int n;
    cout<<"Enter number of element ";
    cin>>n;
    int arr[n];
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }

    remove_dub(arr,n);

}