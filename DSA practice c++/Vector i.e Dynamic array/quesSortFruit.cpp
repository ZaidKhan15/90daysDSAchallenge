#include<bits/stdc++.h>
using namespace std;

bool compare(pair<string,int> a,pair<string,int> b){
    
    return a.second &lt; b.second;
    
}


vector<string,int> sortFruits(vector<string,int> v, string S){
    
    if(S == "name"){
        sort(v.begin(),v.end());
    }else
    {
        sort(v.begin(),v.end(),compare);
    }
    return v;
}