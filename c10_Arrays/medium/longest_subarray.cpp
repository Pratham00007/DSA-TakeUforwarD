/*
Given an array and a sum k, we need to print the length of the longest subarray that sums to k.
*/

#include<bits/stdc++.h>
using namespace std;

int subarray(vector<int> arr,int n,int k){
    int sum;
    int j=0;
    for(int k=0;k<n;k++){
    for (int i=k;i<n;i++){
        sum=0;
        for(int j=k;j<i;j++){
            sum+=arr[j];
            if (sum==k){
                return j-k;
            }
        }

    }
}
    return -99;
}


 int main(){
    cout<<"ENTER NO OF ELEMENTS: ";
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int target;
    cout<<"Enter the target";
    cin>>target;
    cout<<"max size of sub array "<<subarray(arr,n,target);
 }