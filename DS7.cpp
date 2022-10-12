#include <iostream>
using namespace std;
int main()
{
    int n1,n2,n3,a[10000],b[10000],c[20000];
    cout<<"Archit Kumar Singh\n";
    cout<<"Enter the size of first array\n";
    cin>>n1;
    cout<<"Enter the array elements\n";
    for(int i=0;i<n1;i++)      
       cin>>a[i];
    cout<<"Enter the size of second array\n";
        cin>>n2;
    cout<<"Enter the array elements\n";
    for(int i=0;i<n2;i++)
       cin>>b[i];
    n3=n1+n2;
    for(int i=0;i<n1;i++)
       c[i]=a[i];
    for(int i=0;i<n2;i++)     
        c[i+n1]=b[i];
    cout<<"The merged array\n";
    for(int i=0;i<n3;i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<"\nFinal array after sorting\n";
    for(int i=0;i<n3;i++)
    {
        int flag;
        for(int j=i+1;j<n3;j++)
        {
            if(c[i]>c[j])
            {
                flag=c[i];
                c[i]=c[j];
                c[j]=flag;
            }
        }
    }   
    for(int i=0;i<n3;i++)    
    cout<<c[i]<<" ";  
}