#include<iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3],i,j;
    cout<<"Archit Kumar Singh\n";
    cout<<"Enter the elements in the matrix\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"The transpose of the matrix is\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=a[j][i];
            cout<<b[i][j]<<"\t";
        }
        cout<<"\n";
    }
}