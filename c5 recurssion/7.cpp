/*
Reverse an array

Given an array arr of n elements. The task is to reverse the given array. 
The reversal of array should be inplace.


Examples:
Input: n=5, arr = [1,2,3,4,5]
Output: [5,4,3,2,1]

*/


#include <bits/stdc++.h>
using namespace std;

int fact=1;
int rev_arr(int arr[],int n,int i){
   if(n-i-1<=i){
    for(int m=0;m<n;m++){
        cout<<arr[m]<<endl;
    }
    return 0;
   }
   int temp=arr[i];
   arr[i]=arr[n-i-1];
   arr[n-i-1]=temp;
   rev_arr(arr,n,i+1);
    
}

int main(){
    cout<<"Enter the no of elements in array";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

//     cout<<"Before Sorting"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }

//     // Reversing using loop
//     for(int j=0;j<n/2;j++){
//         int temp=arr[j];
//         arr[j]=arr[n-j-1];
//         arr[n-j-1]=temp;
//     }

//     // After reversing
//    cout<<"After Sorting"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }


    rev_arr(arr,n,0);

    
}