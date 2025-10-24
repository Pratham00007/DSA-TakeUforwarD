/*
ASCI
a=97
z=122
*/

#include<bits/stdc++.h>
using namespace std;

int wthout_hash(){
string str="abcdeabczef";
    int len=str.length();
    int no=0;

    for(int i=0;i<len;i++){
        if (str[i]=='a'){
            no+=1;
        }
    }
    cout<<no;
}

int with_hash(){
    string str;
    cout<<"Enter string: ";
    cin>>str;

    int arr[256]={0};
    for(int i=0;i<str.size();i++){
        int index=int(str[i]); // it does type casting to ASCII value
        arr[index]+=1;

    }

    cout<<"Enter the character you want to search";
    char sea;
    cin>>sea;
    int ind=int(sea);
    cout<<arr[ind];

}


int main(){
    with_hash();
}