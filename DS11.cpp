#include<iostream>
using namespace std;
int main()
{
    int a[5],b[5],c[10],d[10],i,j,k=0,m,n,p=0,t,s,e[10],h,f=0;
    cout<<"Archit Kumar Singh\n";
    cout<<"Enter the size of arrays A and B\n";
    cin>>m>>n;
    cout<<"Enter the elements of array A\n";
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the elements of array B\n";
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<m;i++)
    {
        t=0;
        for(j=0;j<n;j++)
        {
    	    if(a[i]==b[j])
    	    {
                t=1;
            }
        }
        if(t==0)
        {
    	    c[k]=a[i];
    	    k++;
        }
    }
    for(i=0;i<n;i++)
    {
    	t=0;
    	for(j=0;j<m;j++)
        {
            if(b[i]==a[j])
            {
                t=1;
            }
        }
        if(t==0)
        {
            d[p]=b[i];
            p++;
        }
    }
    for(i=0;i<k;i++)
    {
        e[i]=c[i];
    }
    for(j=0;j<p;j++)
    {
        e[k+j]=d[j];
    }
    s=k+p;
    for(i=0;i<s-1;i++)
    {
        for(j=0;j<s-i-1;j++)
        {
            if(e[j]>e[j+1])
            {
                t=e[j];
                e[j]=e[j+1];
                e[j+1]=t;
            }
        }
    }
    for(i=0;i<s;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(e[i]==e[j])
            {
                for(h=j;h<s;k++)
                {
                    e[h]=e[h+1];
                    s--;
                }
            }
        }
    }
    cout<<"The symmetric difference is\n";
    for(i=0;i<s;i++)
    {
        cout<<e[i]<<" ";
    }
}