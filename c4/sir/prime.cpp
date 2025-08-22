
#include<bits/stdc++.h>
using namespace std;



int main(){
    int x;
    cout<<"enter no:";
    cin>>x;

    vector <int>ls;
    // 12*3=36 and 3*12=36  so need to til sqrt
    for(int i=1;i<=sqrt(x);i++){
        if (x%i==0){
            ls.push_back(i);
                // to insert the 6*6 only once 
            if ((x/i)!=i){
                ls.push_back(x/i);
            }

        }
    }

    sort(ls.begin(),ls.end());  // if waanted sorted
    for(auto it:ls) cout<<it<<" ";    
}


