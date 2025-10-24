#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements in array";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++){
        cout<<"Enter the " << i+1 << " Element: ";
        cin>>arr[i];
    }

    // precompute
    int hash[13]={0}; //known no of elements is 12
    for(int i=0;i<=n;i++){
        hash[arr[i]]+=1; // kind of counting sort logic
    }

    // int q;
    // cout<<"for how many number you want to search?";
    // cin>>q;    
    // while(q--){
    //     int number;
    //     cout<<"Enter "<<q<<"number to be searched for ";
    //     cin>>number;
    //     // fetch
    //     cout<<hash[number]<<endl; 
    //     // print no of times a no apperared
    // }    
    // return q;

    cout<<"Enter the element you want to search for ";
    int no;
    cin>>no;

    cout<<hash[no];
}

/*
NOTE
you can declear int aray of 10^6 inside main and outside 10^7
if you try to declear more than 10^6 in main it give segmentation fault

for bool typr inside main 10^7 and ouside 10^8
*/