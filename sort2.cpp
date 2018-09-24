#include<bits/stdc++.h>

using namespace std;

void binary(int arr[],int l, int h,int num)
{
    int pos;
    while(l<=h)
    {
      int mid=(l+h)/2;
        if(arr[mid]==num)
        {
            pos=mid;
            l=mid+1;
        }
        if(arr[mid]>num)
        {
            h=mid-1;
        }
        else if(arr[mid]<num)
           l=mid+1;
    }
    printf("%d",pos);
}
int main()
{
    int arr[]={1,2,3,3,3,4};
    binary(arr,0,5,3);
    return 0;
}
