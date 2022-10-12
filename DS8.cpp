#include<iostream>
using namespace std;
int main()
{
   int a[10],b[10],i,c[10],j,k=0,n1,n2;
   cout<<"Archit Kumar Singh\n";
   cout<<"Enter number of  element of set A\n";
   cin>>n1;
   cout<<"Enter the element of set A\n";
   for(i=0;i<n1;i++)
   {
    cin>>a[i];
   }
   cout<<"Enter number of element of set B\n";
   cin>>n2;
   cout<<"Enter the element of set B\n";
   for(i=0;i<n2;i++)
   {
    cin>>b[i];
   }
   for(i=0;i<n1;i++)
   {
      for(j=0;j<k;j++)
      {
         if(c[j]==a[i]) 
            break;
       }
       if(j==k)
       {
          c[k]=a[i];
          k++;
       }
    }
   for(i=0;i<n2;i++)
   {
      for(j=0;j<k;j++)
      {
         if(c[j]==b[i])
           break;
      }
     if(j==k) 
     {
       c[k]=b[i];
       k++;
     }
   }
   cout<<"Union of set A and B is\n";
    for(i=0;i<k;i++)
      cout<<c[i];
}