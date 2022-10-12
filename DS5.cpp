#include <iostream>
using namespace std;
int FMN(int arr[],int size)
{
  int Totalsum=(size+1)*(size+2)/2;
  int i,Currentsum=0;

  for (i=0;i<size;i++)
  {
    Currentsum+=arr[i];
  }

  return Totalsum-Currentsum;
}
int main()
{
  int i,n;
  cout<<"Archit Kumar Singh\n";
  cout<<"Enter the size of the array : \n";
  cin>>n;

  int arr[n-1];

  cout<<"Enter the values : \n";
  for (i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int MN=FMN(arr,n);
  cout<<"Missing number is: "<<MN<<"\n";
}