#include<iostream>
using namespace std;
int main()
{
    int n,i,j,minimum,key;
    cout<<"Enter Number of Marks: ";
    cin>>n;
    int a[n],b[n],c[n];
    cout<<"Enter Marks: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
        c[i]=a[i];
    }
    //Bubble sort
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"compares adjacent sheets and get new order: ";
    //selection sort
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(i=0;i<n-1;i++)
    {
        minimum=i;
        for(j=i+1;j<n;j++)
        {
            if(b[j]<b[minimum])
            {
                minimum=j;
            }
        }
        int temp=b[i];
        b[i]=b[minimum];
        b[minimum]=temp;
    }
    cout<<"\nthe lowest-marked sheet order : ";
    //Insertion Sort
    for(i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    for(i=1;i<n;i++)
    {
        key=c[i];
        j=i-1;
        while(j>=0&&c[j]>key)
        {
            c[j+1]=c[j];
            j--;
        }
        c[j+1]=key;
    }
    cout<<"\ncorrect position among the already-arranged sheets: ";
    for(i=0;i<n;i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}
