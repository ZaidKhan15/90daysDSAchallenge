// only method

void rotate(vector<vector<int>>& v){
    

    int n = v.size();

    //transpose of the matrix

   for (int i = 0; i < n; i++)
   {
       for (int j = 0; j < i; j++)
       {
           swap(v[i][j],v[j][i]);
       }
       
   }
   
   // reversing it by row

   for(int i = 0; i< n; i++){
       reverse(v.begin(),v.end());
   }



};