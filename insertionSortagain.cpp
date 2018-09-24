#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;

void insertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key= arr[i];
        int j=i-1;
        while(j>=0 && key<arr[j])
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;


    }

}
int main()
{
    int arr[]={5,3,7,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    for (int i=0;i<n;i++)
       printf("%d ",arr[i]);
    return 0;
}
