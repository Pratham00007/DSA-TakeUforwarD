/*
Rotten Oranges : Min time to rot all oranges : BFS


6

Problem Statement: Given an n x m grid, where each cell has the following values :
2 - represents a rotten orange , 1 - represents a Fresh orange , 0 - represents an Empty Cell .

Every minute, if a fresh orange is adjacent to a rotten orange in 4-direction 
( upward, downwards, right, and left ) it becomes rotten.
Return the minimum number of minutes required such that none of the cells 
has a Fresh Orange. If it's not possible, return -1..

Examples
Input :grid = [ [2, 1, 1] , [0, 1, 1] , [1, 0, 1] ]
Output :-1
Explanation : Orange at (3,0) cannot be rotten.

Input :grid = [ [2,1,1] , [1,1,0] , [0,1,1] ]
Output :4
Explanation :

*/


#include<bits/stdc++.h>
using namespace std;

int orangesRotting(vector<vector<int>>& grid) {
    int n=grid.size();
    int m=grid[0].size();
    queue<pair<pair<int,int>,int>>q;

    vector<vector<int>>vis(n, vector<int>(m, 0));
    for(int i=0;i<n;i++ ){
        for(int j=0;j<m;j++){
            if(grid[i][j]==2){
                q.push({{i,j},0});
                vis[i][j]=2;
            }
            else{
                vis[i][j]=0;
            }
        }
    }

    int tm=0;
    int drow[]={-1,0,+1,0};
    int dcol[]={0,1,0,-1};

    while(!q.empty()){
        int r=q.front().first.first;
        int c=q.front().first.second;
        int t=q.front().second;
        tm=max(tm,t);
        q.pop();
        for(int i=0;i<4;i++){
            int nrow=r+drow[i];
            int ncol=c+dcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m
            && vis[nrow][ncol]!=2 && grid[nrow][ncol]==1){
            q.push({{nrow,ncol},t+1});
            vis[nrow][ncol]=2;}
        }

    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vis[i][j] !=2 && grid[i][j]==1){
                return -1;
            }
        }
    }

    return tm;

}