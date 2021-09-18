#include<iostream>
using namespace std;

//The output i am printing is diffrent as we are arrays are passed by refrence
//the box where the address of array is stored is of 8 byte so the size of array will differ from main
//the print array function will have a size of 8 byte **Here in mine it is of 4byte ** as i printed and checked
//And in thr main the size of the array is 6*4(int size) = 24byte 
//this is why we are facing diffrence 
printarray(int arr[]) //printarray(int * arr)   can also be done because of having same meaning
{
int n = sizeof(arr)/sizeof(int);

  cout<<"IN function :";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int arr[] = {1,3,5,9,4,8};

    int n = sizeof(arr)/sizeof(int);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }

    printarray(arr);
    



    return 0;
}