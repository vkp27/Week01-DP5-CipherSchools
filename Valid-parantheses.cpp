#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack <int> st;
    if(s.size()%2!=0){
        return false;
    }
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                return false;
            }
            char tp = st.top();
            st.pop();
            if(tp=='(' && s[i]==')' || 
                tp=='{' && s[i]=='}' || 
                tp=='[' && s[i]==']' )
            {
                continue;
            }
            else{
                return false;
            }
        }
    }
    if(!st.empty()){
        return false;
    }
    return true;
}

int main(){
    return 0;
}