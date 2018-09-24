#include<cstdio>
#include<cmath>

using namespace std;

int binarySearch(int arr[],int l,int h,int x)
{
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]==x)
          return 1;
        else if(arr[mid]>x)
           {
               h=mid-1;
           }
        else if(arr[mid]<x)
        {
            l=mid+1;
        }
    }
    return -1;
}
int main()
{
    int arr[]={0,1,2,3,4,5,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    int number;
    scanf("%d",&number);
    int res= binarySearch(arr,0,n-1,number);
    if(res==-1)
      printf("Not found");
    else
    printf("Found");
}
