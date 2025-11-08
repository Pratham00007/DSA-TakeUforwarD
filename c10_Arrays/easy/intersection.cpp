#include<bits/stdc++.h>
using namespace std;

// Brute Force
vector<int> intersection(vector<int> a1,vector<int> a2){
    vector<int> arr3;
    int n1=a1.size();
    int n2=a2.size();
    int i=0;
    int j=0;
    vector<int> intersected;
    int temp[n2]={0};
    while(i<n1){
        for(int j=0;j<n2;j++){
            if(a1[i]==a2[j] && temp[j]==0){
                intersected.push_back(a2[j]);
                temp[j]+=1;
                break;
            }
        }
        i++;
    }
    return intersected;
}

// Optimal-> 2 pointer
vector<int> intersection2(vector<int> a1,vector<int> a2){
    
    int n1=a1.size();
    int n2=a2.size();
    int i=0;
    int j=0;
    vector<int> intersected;
    while(i<n1 &&j<n2){
    if(a1[i]>a2[j]){
        j++;
    }else if(a2[j]>a1[i]){
        i++;
    }else{
        intersected.push_back(a1[i]);
        i++;
        j++;
    }
}
    return intersected;
}

int main(){
    cout<<"Enter no of elements in array1 ";
    int n1;
    cin>>n1;
    vector<int> arr1;
    for(int i=0;i<n1;i++){
        int temp;
        cin>>temp;
        arr1.push_back(temp);
    }

    cout<<"Enter no of elements in array2";
    int n2;
    cin>>n2;
    vector<int> arr2;
    for(int i=0;i<n2;i++){
        int temp;
        cin>>temp;
        arr2.push_back(temp);
    }

     cout<<"After Intersection"<<endl;
    vector<int> result=intersection2(arr1,arr2);
    for(auto it:result){
        cout<<it<<endl;
    }

}