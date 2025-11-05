/*

Given an array consisting of only 0s, 1s, and 2s. Write a program to in-place sort the array without using inbuilt sort functions. ( Expected: Single pass-O(N) and constant space)

Examples
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]

Input: nums = [2,0,1]
Output: [0,1,2]

Input: nums = [0]
Output: [0]

*/
#include  <bits/stdc++.h>
using namespace std;

vector<int> insort(vector <int> arr,int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (arr[i]<arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    return arr;
}
int main(){
    int n;
    cout<<"enter no of elements";
    cin>>n;
    vector<int> arr;
    for (int j=0;j<n;j++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"after sort"<<endl;
    vector<int> result=insort(arr,n);
    for(auto it:result){
        cout<<it<<endl;
    }



}