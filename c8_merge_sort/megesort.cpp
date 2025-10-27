#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int low,int mid,int high){
    vector<int>temp;
    int left =low;
    int right = mid+1;
    while(left <= mid && right <=high){
        if (arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    
    while(right<=high){
        temp.push_back(arr[left]);
        right++;
    }

    for(int i=low;i<=high;i++){
        arr[i] = temp[i-low];
    }
}

void mergeSort(vector<int> &arr,int low, int high){
    if(low == high ) return;
    int mid = (low + high)/2;
    // first half of array sorted
    mergeSort(arr,low,mid);
    // second half of array sorted
    mergeSort(arr,mid+1,high);
    // now merge both sorted in sorted way
    merge(arr,low,mid,high);
}
void mergeSortmain(vector<int> &arr, int n){
    mergeSort(arr,0,n-1);
    cout<<"After Sort"<<endl;
    for(int j=0;j<n;j++){
        cout<<arr[j]<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter no of elements";
    cin>>n;
    vector<int> arr(n);

    for (int j=0;j<n;j++){
        cin>>arr[j];
    }

    mergeSortmain(arr,n);
}



