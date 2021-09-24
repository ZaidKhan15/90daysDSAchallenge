#include<iostream>
using namespace std;

int main()
{
  char ch;

  ch = cin.get();

 int digit = 0;
 int space = 0;
 int alpha = 0;

  while (ch != '\n')
  {
      if(ch>='0' and ch<='9'){
          digit++;
      }else if (ch>='a' or ch<='z' and ch>='A' or ch>='Z')
      {
          alpha++;
      }else if (ch==' ' or ch =='\t')
      {
          space++;
      }
      ch = cin.get();
  }
  cout<<digit<<endl;
  cout<<space<<endl;
  cout<<alpha<<endl;





return 0;
}