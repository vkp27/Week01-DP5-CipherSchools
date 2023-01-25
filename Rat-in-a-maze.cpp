#include<bits/stdc++.h>
using namespace std;

void fun(int i,int j,vector<vector<int>> &m,int n,vector<string>&res,
        vector<vector<int>>&vis, string move,int di[],int dj[]){
            if(i==n-1 && j==n-1){
                res.push_back(move);
                return;
            }        
            
            string odr = "DLRU";
            for(int idx = 0; idx < 4; idx++){
                int nextI = i + di[idx];
                int nextJ = j + dj[idx];
                if(nextI>=0 && nextJ>=0 && nextI<n && nextJ<n && 
                    !vis[nextI][nextJ] && m[nextI][nextJ]==1) {
                        vis[i][j]=1;
                        fun(nextI,nextJ,m,n,res,vis,move+odr[idx],di,dj);
                        vis[i][j]=0;
                    }
            }
        }
    vector<string> findPath(vector<vector<int>> &m, int n) {

        vector<string>res;
        vector<vector<int>> vis(n, vector<int>(n,0));
        int di[]={+1,0,0,-1};
        int dj[]={0,-1,+1,0};
        if(m[0][0] == 1){
            fun(0,0,m,n,res,vis,"",di,dj);
        }
        return res;
    }

int main(){
    return 0;
}