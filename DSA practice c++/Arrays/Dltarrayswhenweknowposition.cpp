
#include<iostream>
using namespace std;

int
main ()
{
  int arr[100], size, element, found = 0;
  cout << "Enter the size of the array" << "\n";
  cin >> size;
  cout << "Enter the Element you want to delete" << "\n";
  cin >> element;
  cout << "Enter the elements  ot be insertd in theh array" << "\n";
  for (int i = 0; i < size; i++)
    {
      cin >> arr[i];
    }

  for (int i = 0; i < size; i++)
    {

      if (arr[i] == element)
	{
	  for (int j = i; j < (size - 1); j++)
	    {
	      arr[j] = arr[j + 1];
	      found = 1;
	      // i--;
	      //size--;
	    }
	  size = size - 1;
	}
    }

  if (found == 0)
    {
      cout << "The element is not present in the array";
    }
  else
    {
      cout << "The element is successfully deleted frm the array" << "\n";
      for (int i = 0; i < size; i++)
	{
	  cout << arr[i] << "\n";
	}

    }


  //To check if the element si successfully deleted



}
