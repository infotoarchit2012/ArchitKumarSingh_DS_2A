#include<iostream>
#include<math.h>
using namespace std;
int DTM(int matrix[10][10],int n)
{
   int det=0;
   int SBM[10][10];
   if(n == 2)
   return((matrix[0][0]*matrix[1][1])-(matrix[1][0]*matrix[0][1]));
   else
   {
      for(int x=0;x<n;x++)
      {
        int subi=0;
        for(int i = 1; i < n; i++)
        {
           int subj=0;
           for(int j=0;j<n;j++)
           {
              if(j==x)
              continue;
              SBM[subi][subj]=matrix[i][j];
              subj++;
           }
           subi++;
        }
        det=det+(pow(-1,x)*matrix[0][x]*DTM(SBM,n-1));
      }
   }
   return det;
}
int main()
{
   int n,i,j;
   int matrix[10][10];
   cout<<"Enter the size of the matrix\n";
   cin>>n;
   cout<<"Enter the elements of the matrix\n";
   for(i=0;i<n;i++)
   for(j=0;j<n;j++)
   cin>>matrix[i][j];
   cout<<"The matrix is\n";
   for(i=0;i<n;i++)
   {
      for (j=0;j<n;j++)
      cout<<matrix[i][j]<<" ";
      cout<<"\n";
   }
   cout<<"DTM of the matrix is "<<DTM(matrix, n);
   return 0;
}