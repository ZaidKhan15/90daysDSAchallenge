#include<iostream>
using namespace std;

int main(){
 
  char route[1000];
  cin.getline(route,1000);

  int x=0;
  int y=0;

  for (int i = 0; route[i]!='\0'; i++)
  {
      switch (route[i])
      {
      case 'N': y++;
      break;
      case 'S': y--;
      break;
      case 'E': x++;
      break;
      case 'W': x--;
      break;
      }
  }
  
  cout<<"The value of X is :"<<x<<"and Y is :"<<y<<endl;

  if(x>=0 and y<=0)//4TH QUADRANT
  {
    while (y++)
    {
        
        cout<<"S";

    }
     while (x--)
     {
        
         cout<<"E";
     }
}

 

    
    
    
    return 0;
}