// add the element in asscending order 

#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int>pq;
    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(4); //{5,4,2}
    pq.push(10); //{10,5,4,2}

    cout<<pq.top();
}