#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  cin.get();

  char sentence[1000];
  char Largest[1000];
  
  int largest_len = 0;
  while (n--)
  {
      /* code */

      cin.getline(sentence,1000);
      int len = strlen(sentence);
      if (len > largest_len)
      {
          largest_len = len ;
          strcpy(Largest,sentence);
      }
      
  }
  
  
  cout<<"Largest string is :- "<<Largest<<endl;


    return 0;
}