#include<iostream>
using namespace std;
int main()
{
    cout<<"Archit Kumar Singh\n";
    int a[100]={1,2,3,4,5,6,7,8,9},i,j,n,pos;
    cout<<"The array is 1,2,3,4,5,6,7,8,9\n";
    cout<<"Enter the position where you want to insert the element in the array\n";
    cin>>pos;
    for(i=8;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    cout<<"Enter the number in the array\n";
    cin>>n;
    a[pos]=n;
    for(i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}