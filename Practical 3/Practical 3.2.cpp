#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(i=0;i<n;i++)
        cin>>arr[i];
    int count0=0,count1=0,count2=0;
// First pass: Count
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
            count0++;
        else if(arr[i]==1)
            count1++;
        else
            count2++;
    }
    // Second pass: Overwrite array
    int index=0;
    for(i=0;i<count0;i++)
    {
        arr[index]=0;
        index++;
    }
    for(i=0;i<count1;i++){
        arr[index] = 1;
        index++;
    }
    for(i=0;i<count2;i++){
        arr[index] = 2;
        index++;
    }
    return 0;
}
