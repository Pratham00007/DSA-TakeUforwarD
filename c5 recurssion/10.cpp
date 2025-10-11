#include<bits/stdc++.h>
using namespace std;

int Palindrome(string rev,string s,int n,int i){
    if(i>=n){
        if(s==rev){
            cout<<"Palindrome";
        }else{
            cout<<"not Palindrome";
        }
        return 0;
    }
    rev+=s[n-i-1];
    Palindrome(rev,s,n,i+1);
}
int main(){
    string s;
    cout<<"Enter the String: ";
    cin>>s;
    string rev;
    int len=s.length();
    Palindrome(rev,s,len,0);


}