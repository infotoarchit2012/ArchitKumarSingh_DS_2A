#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Archit Kumar Singh\n";
    cout<<"Enter  the size of array A and B\n";
    cin>>m>>n;
    int a[m],b[n];
    cout<<"Enter elements of the array A\n";
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter elements of the array B\n";
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int i,j,k;
    k=0;
    int c[m];
    for(i=0;i<m;i++)
    {
        int flag=0;
        for(j=0;j<n;j++)
        {
            if(b[j]==a[i])
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            c[k]=a[i];
            k++;
        }
    }
    cout<<"Difference of the set is\n";
    for (i=0;i<k;i++)
    {
        cout<<c[i]<<" ";
    }
}