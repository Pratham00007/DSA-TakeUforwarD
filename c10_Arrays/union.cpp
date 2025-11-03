// move zeros to end and maintain the digits

#include<bits/stdc++.h>
using namespace std;


// brute force
vector<int> sorted_union_Array(vector <int> a, vector<int> b){
    int n1 = a.size();
    int n2= b.size();
    set<int> st;
    for(int i=0;i<n1;i++){
        st.insert(a[i]);
    }
    for(int j=0;j<n2;j++){
        st.insert(b[j]);
    }

    vector<int> temp;
    for(auto it:st){
        temp.push_back(it);
    }
    return temp;

}

// Optimal -> two pointer approch
// tc= O(n1+n2) sc=O(n1+n2)

vector<int> sorted_union_Array2(vector <int> a, vector<int> b){
    vector<int> union_arr;

    int n1=a.size();
    int n2=b.size();

    int i=0;
    int j=0;

    while(i<n1 && j<n2){
        if (a[i]<=b[j]){
            if(union_arr.size()==0 || union_arr.back()!=a[i]){
                union_arr.push_back(a[i]);
            }
            i++;
        }else{
            if(union_arr.size()==0 || union_arr.back()!=b[j]){
                union_arr.push_back(b[j]);
            }
            j++;
        }
    }

    while (i<n1){
        if (a[i]<=b[j]){
            if(union_arr.size()==0 || union_arr.back()!=a[i]){
                union_arr.push_back(a[i]);
            }
            i++;
        }
    }

    while (j<n2)
    {
        if(union_arr.size()==0 || union_arr.back()!=b[j]){
                union_arr.push_back(b[j]);
            }
            j++;
    }
    
    return union_arr;
}

// mine -> uniqueness still lacks
int union_arrays(int arr1[],int n1,int arr2[],int n2){
    int arr3[n1+n2];
    for(int i=0;i<n1;i++){
        arr3[i]=arr1[i];
    }
    for (int j=n1;j<n1+n2;j++){
        arr3[j]=arr2[j-n1];
    }

    sort(arr3,arr3+n1+n2);
cout<<"After merging"<<endl;

    for(int k=0;k<n1+n2;k++){
        cout<<arr3[k]<<endl;
    }
}

int main(){

    int n1;
    cout<<"enter number of elements in array 1 ";
    cin>>n1;

    vector<int> a;
    for(int i=0;i<n1;i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }

    int n2;
    cout<<"enter number of elements in array 1 ";
    cin>>n2;

    vector<int> a2;
    for(int i=0;i<n2;i++){
        int temp;
        cin>>temp;
        a2.push_back(temp);
    }
    cout<<"After union"<<endl;
    vector<int> result=sorted_union_Array2(a,a2);
    for(auto it:result){
        cout<<it<<endl;
    }

}
//     int n1;
//     cout<<"enter number of elements in array 1 ";
//     cin>>n1;

//     int arr1[n1];
//     for(int j=0;j<n1;j++){
//         cin>>arr1[j];
//     }

//     int n2;
//     cout<<"enter number of elements in array 2 ";
//     cin>>n2;
    
//     int arr2[n2];
//     for(int j=0;j<n2;j++){
//         cin>>arr2[j];
//     }
    
// union_arrays(arr1,n1,arr2,n2);
    
// }
