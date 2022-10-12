#include<iostream>
using namespace std;
int main()
{
    int i,size,arr[size],element,j,flag;
    cout<<"Archit Kumar Singh\n";
    cout<<"Enter size of the array\n";
    cin>>size;
    flag=size;
    for(i=0;i<size;i++)
    {
        cout<<"Give element for index "<<i<<"\n";
        cin>>arr[i];
    }
    cout<<"Enter the element to delete\n";
    cin>>element;
    for(i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            for(j=i;j<size-1;j++)
            {
                arr[j]=arr[j+1];
            }
            size--;
            i--;
        }
    }
    if(flag==size)
    {
        cout<<"No element "<<element<<" found in array\n";
        exit(0);
    }
    cout<<"Rest elements of array after deleting "<<element<<"are\n";
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}