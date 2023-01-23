#include<bits/stdc++.h>
using namespace std;

void traverseSpiral(vector<vector<int>> &matrix, int row, int col, vector<int> &res){
        
        int total = row * col;
        int cnt = 0;
        int startRow = 0;
        int startCol = 0;
        int endRow = row-1;
        int endCol = col-1;

        while(cnt < total){

            for(int i=startCol;cnt<total && i<=endCol;i++){
                res.push_back(matrix[startRow][i]);
                cnt++;
            }
            startRow++;

            for(int i=startRow;cnt<total && i<=endRow;i++){
                res.push_back(matrix[i][endCol]);
                cnt++;
            }
            endCol--;

            for(int i=endCol;cnt<total && i>=startCol;i--){
                res.push_back(matrix[endRow][i]);
                cnt++;
            }
            endRow--;

            for(int i=endRow;cnt<total && i>=startRow;i--){
                res.push_back(matrix[i][startCol]);
                cnt++;
            }
            startCol++;
        }
    }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> res;

        traverseSpiral(matrix, n, m, res);

        return res;
    }

int main(){
    return 0;
}