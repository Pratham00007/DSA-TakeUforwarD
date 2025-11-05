/*

Problem Statement: Given an array of integers arr[] and an integer target.

1st variant: Return YES if there exist two numbers such that their sum is equal to the target. Otherwise, return NO.

2nd variant: Return indices of the two numbers such that their sum is equal to the target. Otherwise, we will return {-1, -1}.

Note: You are not allowed to use the same element twice. Example: If the target is equal to 6 and num[1] = 3, then nums[1] + nums[1] = target is not a solution.

Examples:

Example 1:
Input Format: N = 5, arr[] = {2,6,5,8,11}, target = 14
Result: YES (for 1st variant)
       [1, 3] (for 2nd variant)
Explanation: arr[1] + arr[3] = 14. So, the answer is “YES” for the first variant and [1, 3] for 2nd variant.

Example 2:
Input Format: N = 5, arr[] = {2,6,5,8,11}, target = 15
Result: NO (for 1st variant)
	[-1, -1] (for 2nd variant)
Explanation: There exist no such two numbers whose sum is equal to the target.

*/

#include<bits/stdc++.h>
using namespace std;


vector<int> sum_two(vector<int> a,int n,int target){
    vector<int> result;
    int i=0;
    int j=0;
    while(j<n){
        i=0;
        while(i<n){
            if (a[j]+a[i]==target && a[j]!=a[i]){
            result.push_back(i);
            result.push_back(j);
            cout<<"Yes"<<endl;
            return result;
        }
        i++;
        }
        j++;
    }
    
        cout<<"No"<<endl;
        result.push_back(-1);
        result.push_back(-1);
        return result;
    
    
}

int main(){
    cout<<"Enter no of elements:";
    int n;
    cin>>n;

    vector<int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int target;
    cout<<"Enter target:";
    cin>>target;

    vector<int> result=sum_two(arr,n,target);
    for(auto it: result){
        cout<<it<<" ";
    }
}