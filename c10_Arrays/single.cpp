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

// brute force
// tc=n^2
int single2(int arr[],int n){
    for (int i=0;i<n;i++){
        int count =0;
        for(int j=0;j<n;j++){
            if (arr[i]==arr[j]){
                count++;
            }
        }
        if (count==1){
            return arr[i];
        }
    }
}

// Better
/*
1. using hash ie one arr of size max of elemnet. iterate thoruogh arr then +1 the index of new arr.
if count ==1 return that element

2. or
use map iterate thoough map if map.second==1 return map.first 
tc= nlogn for sorted map and n for unordered only n2 in worst case
sc= O(n/2)
*/

// Optimal

/*
XOR-> 0^0=0 but 0^2=2
means return 0 if same no xor and no itself if non same
tc=O(n)
*/
int single3(int arr[], int n){
    int xorr=0;
    for (int i=0;i<n;i++){
        xorr=xorr ^ arr[i];
    }
    return xorr;
}

// mine
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

    cout<<"Non twice element is"<<single3(arr,n);
}