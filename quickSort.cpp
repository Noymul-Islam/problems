#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;

int partition(int arr[],int l,int h)
{
    int pivot = arr[h];
    printf("pivot %d\n",pivot);
    int i=l-1;
    for(int j=l;j<=h-1;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}
void QuickSort(int arr[],int l, int h)
{
    if(l<h)
    {int pi = partition(arr,l,h);
    QuickSort(arr,l,pi-1);
    QuickSort(arr,pi+1,h);
    }
}
int main()
{
    int arr[]={10,5,3,74,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
      printf("%d\n",arr[i]);
    return 0;
}
