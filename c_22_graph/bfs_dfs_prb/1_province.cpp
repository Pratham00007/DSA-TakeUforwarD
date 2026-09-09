/*
Number of Provinces


4

Problem Statement: Given an undirected graph with V vertices. Two vertices u and v belong
 to a single province if there is a path from u to v or v to u. Find the number of provinces.
  The graph is given as an n x n matrix adj where adj[i][j] = 1 if the ith city and the 
  jth city are directly connected, and adj[i][j] = 0 otherwise.

Examples
Input: adj=[ [1, 0, 0, 1], [0, 1, 1, 0], [0, 1, 1, 0], [1, 0, 0, 1] ]
Output: 2
Explanation: In this graph, there are two provinces: [1, 4] and [2, 3]. City 1 and city 
4 have a path between them, and city 2 and city 3 also have a path between them. 
There is no path between any city in province 1 and any city in province 2.
Input: adj= [ [1, 0, 1], [0, 1, 0], [1, 0, 1] ]
Output: 2
Explanation :  The graph clearly has 2 Provinces [1,3] and [2]. As city 1 and city 3 
has a path between them they belong to a single province. City 2 has no path to 
city 1 or city 3 hence it belongs to another province.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void dfs(int node,vector<int>adj_list[],vector<int>&visited){
        visited[node]=1;
        for(auto negi: adj_list[node]){
            if(!visited[negi]){
                dfs(negi,adj_list,visited);
            }
        }
    }

    


    int findCircleNum(vector<vector<int>>& isConnected) {
        int v=isConnected.size();

        vector<int>adj_list[v];
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                if(i!=j && isConnected[i][j]==1){
                    adj_list[i].push_back(j);
                    adj_list[j].push_back(i);
                }
            }
        }

        vector<int> visited(v,0);
        int cnt=0;
        for(int i=0;i<v;i++){
            if(visited[i]==0){
                cnt++;
                dfs(i,adj_list,visited);
            }
        }

        return cnt;

    }
};