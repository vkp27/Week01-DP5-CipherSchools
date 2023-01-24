#include<bits/stdc++.h>
using namespace std;

void generateParentheses(string &strSoFar, vector<string> &result, int open, int close){
    if(open < 0 || close < 0 || open > close){
        return;
    }

    else if(open == 0 && close == 0){
        result.push_back(strSoFar);
        return;
    }
    else{
        strSoFar.push_back('(');
        generateParentheses(strSoFar, result, open - 1, close);
        strSoFar.pop_back();

        strSoFar.push_back(')');
        generateParentheses(strSoFar, result, open, close - 1);

        strSoFar.pop_back();
    }
    
}

vector<string> generateParentheses(const int n){
    vector<string> result;
    int open = n, close = n;
    string strSoFar = "";
    generateParentheses(strSoFar, result, open, close);
    return result;
}

int main(){
    return 0;
}