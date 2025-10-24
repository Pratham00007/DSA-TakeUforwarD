// in aray hashing we were taking more element space if even not exisit
// heere we storing element hat exist
// using map
// <number,frequency> 


// map automatic store value in ascending order unordered_map stores in any sequencew

// fecthing or creatin map take logn tc in best avg and worst
// storig and searching take O(1) in unorderd map in avg and best case and O(N) in worst
// worst happen in unorderd map in collision situation
// try to use ounorederd first if time limit exceed then only use map

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

    cout<<"Enter number whose frequncy you want to know: ";
    int number;
    cin>>number;
    cout<<mpp[number]<<endl;

    cout<<"Printing automatic all vlause frequency";
    for(auto it: mpp){
        cout<<it.first<< "->" <<it.second <<endl;
    }
}