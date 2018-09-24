#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }

        }

    }
    for(int i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }

}
int main()
{
    int arr[]={1,2,1,3,5,5,3,4,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,size);
    return 0;
}
