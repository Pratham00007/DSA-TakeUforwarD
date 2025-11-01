/*

Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.

Examples

Example 1:
Input Format: arr[] = {2,2,1}
Result: 1
Explanation: In this array, only the element 1 appear once and so it is the answer.

Example 2:
Input Format: arr[] = {4,1,2,1,2}
Result: 4
Explanation: In this array, only element 4 appear once and the other elements appear twice. So, 4 is the answer.

*/

#include<bits/stdc++.h>
using namespace std;

int single(int arr[],int n){

    sort(arr,arr+n);
    for(int i=0;i<n-1;i+=2){
        // 1 1 2 3 3
        if(arr[i+1]!=arr[i]){
            return arr[i];
            break;
        }
    }
    return arr[n-1];

}

int main(){
    int n;
    cout<<"Enter number of elements";
    cin>>n;
    int arr[n];
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }

    cout<<"Non twice element is"<<single(arr,n);
}