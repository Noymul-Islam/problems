#include<cstdio>
#include<cmath>

using namespace std;
void insertionSort(int arr[], int n)
{
    for (int i=1; i<n; i++)
    {
        int j= i-1;
        int key= arr[i];
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;

        }
        arr[j+1]= key;

              }

          }

int main()
{
    int arr[]= {5,9,3,2,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    for ( int i=0 ; i <n ; i++)
    {
        printf("%d ",arr[i]);
    }
}
