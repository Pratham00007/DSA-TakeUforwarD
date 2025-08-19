#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);

cout<<"top element"<<endl;
    cout<<st.top()<<endl; // st[2] is invalid
cout<<"poped"<<endl;
    st.pop();
cout<<st.top()<<endl;
 
cout<<"size "<<st.size()<<endl;

stack<int>s1,s2;
s1.swap(s2);

}