#include<bits/stdc++.h>
using namespace std;


int xoring(vector<int> v)
{
    int result = 0;

   for (int i = 0; i < v.size(); i++)
   {
       result = result ^ v[i];
   }

   return result;
   
}
   
int main()
{
    vector<int> v = {1,2,3,1,4,2,3};

    cout<<xoring(v)<<endl;
}