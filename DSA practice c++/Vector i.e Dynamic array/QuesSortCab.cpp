#include<bits/stdc++.h>

bool compare(pair<int,int> a,pair<int,int> b){


 float x = sqrt((a.first*a.first)+(a.second*a.second));
 float y = sqrt((b.first*b.first)+(b.second*b.second));


 return x < y;
}




vector<pair<int,int>> sortcab(vector<int,int> v){

sort(v.begin(),v.end(),compare);
return v;
}