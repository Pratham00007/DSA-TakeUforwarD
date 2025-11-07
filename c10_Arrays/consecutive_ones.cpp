// Given an array that contains only 1 and 0 return the count of maximum consecutive ones in the array.

#include<bits/stdc++.h>
using namespace std;
int max_iter(vector<int> a,int n){
    int maxi=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            count+=1;
            maxi=max(count,maxi);
        }
        else{
            count=0;
        }
    }
    return maxi;
}
int main(){
    int n;
    cout<<"Enter no of Elements: ";
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"Max iterated 1: "<<endl;
    cout<<max_iter(arr,n);
    
    
}