#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Archit Kumar Singh\n";
    cout<<"Enter the size of array A:\n";
    cin>>m;
    cout<<"Enter the elements of array A:\n";
    int a[m];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    int n;
    cout<<"Enter the size of array B:\n";
    cin>>n;
    int b[n];
    cout<<"Enter the elemets of array B:\n";
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    cout<<"Intersection Of A and B is:\n";
    int k=0;
    int c[k];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(b[j]==a[i])
            {
                c[k]=b[j];
                k++;
            }
        }
    }

    for(int i=0;i<k;i++)
    {
        cout<<c[i];
    }
   return 0;
}