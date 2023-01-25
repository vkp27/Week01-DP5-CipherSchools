#include<bits/stdc++.h>
using namespace std;

int minSwaps(string str){

    string unpurified = "";
    for(int i=0;i<str.size();i++){
        if(str[i] == '['){
            unpurified.push_back('[');
        }
        else{
            if(!unpurified.empty() && unpurified.back() == '['){
                unpurified.pop_back();
            }
            else{
                unpurified.push_back(str[i]);
            }
        }
    }

    cout<<unpurified<<"\n";
    int open = unpurified.size() / 2;

    return ((open+1)/2);
}

int main(){
    cout<<minSwaps("]][[][");
    return 0;
}