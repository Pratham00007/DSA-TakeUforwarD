#include <bits/stdc++.h>
using namespace std;
// fuvtion calling itself until speacial condition meets
// if no base cond stack overflow probloem
int cnt=0;
void rec(){
    if (cnt==4) return;
    
    cout<<cnt<<endl;
    cnt ++;
    rec();
}

int main(){
    rec();
}