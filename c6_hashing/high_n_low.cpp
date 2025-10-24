/*
Find the highest/lowest frequency element


Problem Statement: Given an array of size N. Find the highest and lowest frequency element.

Pre-requisite: Hashing Theory and  Counting frequencies of array elements

Examples:

Example 1:
Input: array[] = {10,5,10,15,10,5};
Output: 10 15
Explanation: The frequency of 10 is 3, i.e. the highest and the frequency of 15 is 1 i.e. the lowest.

Example 2:

Input: array[] = {2,2,3,4,4,2};
Output: 2 3
Explanation: The frequency of 2 is 3, i.e. the highest and the frequency of 3 is 1 i.e. the lowest.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

// lowest frequency element
    auto itera=mpp.begin();
    int a=itera->first; 
    int b=itera->second;
    // i am storing the first pair value in a and b
    for(auto it:mpp){
        if(it.second<b){
                a=it.first;
                b=it.second;
           }
    }
     cout<<"Lowest Frequency Element is "<<a<<" it appeared "<<b<<" times"<<endl;

// Highest frequency element
for(auto it : mpp){
    if(it.second>b){
        a=it.first;
        b=it.second;
    }
}

     cout<<"Highest Frequency Element is "<<a<<" it appeared "<<b<<" times"<<endl;
}