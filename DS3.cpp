#include<iostream>
using namespace std;
int main()
{
    int a[10],n,element,i;
    cout<<"Archit Kumar Singh\n";
    cout<<"Enter the size of the array\n";
    cin>>n;
    cout<<"Enter elements of the array in the sorted order\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<("Enter element to be inserted : ");
    cout<<endl;
    cin>>element;
    i=n-1;
    while(element<a[i]  i>=0)
    {
        a[i+1]=a[i];
        i--;
    }
    a[i+1]=element;
    n++;
    cout<<("\nAfter insertion array is :\n");
    for (i=0;i<n;i++)
    {
        cout<<a[i];
    }
}