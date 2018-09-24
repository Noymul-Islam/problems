#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);

        }

    }

}
int main()
{
    int arr[]={5,8,2,4,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}
