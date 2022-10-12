#include <iostream>
using namespace std;
int main()
{
    int a[100],i,j,size,flag;
    cout<<"Archit Kumar Singh\n";
    cout<<"Please Enter the size : ";
    cin>>size;
    cout<<"Enter the elements\n";
    for (i=0;i<size;i++)
    {
        cin>>a[i];
    }
    j=i-1;
    i=0;
    while(i<j)
    {
        flag=a[i];
        a[i]=a[j];
        a[j]=flag;
        i++;
        j--;
    }
    cout<<"\nResult is: ";
    for (i=0;i<size;i++)
    {
        cout<<a[i];
    }
}