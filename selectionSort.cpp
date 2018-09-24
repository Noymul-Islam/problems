#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>

using namespace std;
void selectionSort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int key= i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[key]>arr[j])
            {
                key=j;
            }
        }
        swap(arr[i],arr[key]);
    }

}
int main()
{
    int arr[]={1,2,5,6,3,1,4,7,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    for(int i=0;i<n;i++)
      printf("%d ",arr[i]);
    return 0;
}
