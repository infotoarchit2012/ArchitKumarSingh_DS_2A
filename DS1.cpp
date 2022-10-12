#include<iostream>
using namespace std;
int main()
{
    cout<<"Archit Kumar Singh\n";
    int a[100],i,j,n;
    cout<<"Enter the number of terms in the array\n";
    cin>>n;
    cout<<"Enter the elements of the array\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}