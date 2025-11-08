
// Cond without sorting
#include<bits/stdc++.h>
using namespace std;

// method-1
int Sec_Largest(int arr[],int n){
    int FL=arr[0];
    
    for(int i=0;i<n;i++){
        if(FL<arr[i]){
            FL=arr[i];
        }
    }

    int SL=arr[0];
    for(int i=0;i<n;i++){
        if(SL<arr[i] && arr[i]!=FL){
            SL=arr[i];
        }
    }



    cout<<"Second Largest element of array is "<<SL<<endl;
}

// method-2

int Sec_Largest_2(int arr[],int n){

    int fl=arr[0];
    int sl=-1; // let array has +ve values
    for(int i=0;i<n;i++){
        if(arr[i]>fl){
            sl=fl;
            fl=arr[i];
        }
        else if(arr[i]!=fl && arr[i]>sl){
            sl=arr[i];
            // for case like 1 2 7 4
        }
    }
    cout<<"Second largest: "<<sl<<endl;;
}


int second_smallest(int arr[],int n){
    int fs=arr[0];
    int ss=INT_MAX;
    
    for(int i=0;i<n;i++){
        if(arr[i]<fs){
            ss=fs;
            fs=arr[i];
        }
        else if(arr[i]!=fs && arr[i]<ss){
            ss=arr[i];
        }
    }

    
    cout<<"Second Smallest elements of aray is"<<ss<<endl;

}


int main(){
    int n;
    cout<<"Enter number of element ";
    cin>>n;
    int arr[n];
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }

    Sec_Largest_2(arr,n);
    second_smallest(arr,n);
}