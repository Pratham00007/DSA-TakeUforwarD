// move zeros to end and maintain the digits

#include<bits/stdc++.h>
using namespace std;

// bruteforce

int move(vector<int> arr, int n){

    // storing non zero elements
    vector<int> temp;
    for(int i=0;i<n;i++){
        if (arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }

    // push non zero to original array
    int n2=temp.size();
    for(int j=0;j<n2;j++){
        arr[j]=temp[j];
    }

    // add zeros on last 
    for(int j=n2;j<n;j++){
        arr[j]=0;
    }
    
    // printing resultant
    for(int j=0;j<n;j++){
        cout<<arr[j];
    }

    // tc=O(n) SC= O(n)
}

// Optimal 2 pointer approach

int move_back(vector<int> arr, int n){
    int j=-1;
    for(int i=0;i<n;i++){
        if (arr[i]==0){
            j=i;
            break;
        }
    }

    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    // printing resultant
    for(int j=0;j<n;j++){
        cout<<arr[j];
    }
}

// mine -> like bubble swap
int replaced(int arr[],int n){

    for(int j=0;j<n-1;j++){
        for(int k=0;k<n-j-1;k++){
        if (arr[k]==0 && arr[k+1]!=0){
            swap(arr[k],arr[k+1]);
        }
    }
    }
    for(int j=0;j<n;j++){
        cout<<arr[j];
    }

}

int main(){
    int n;
    cout<<"enter number of elements";
    cin>>n;

    
    vector<int> arr;
    for(int j=0;j<n;j++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    move_back(arr,n);
}