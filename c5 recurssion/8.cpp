// sum of n numbers by taking argu

#include<bits/stdc++.h>
using namespace std;

int sum(int num, int total){
    if(num==0){
        return total;
    }
    sum(num-1,total+num);
}
int main(){
    cout<<"Enter a number: ";
    int num;
    cin>>num;

    cout<<sum(num,0);
}