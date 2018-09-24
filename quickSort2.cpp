#include<bits/stdc++.h>

using namespace std;
int partition(int arr[],int low, int high)
{
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<=high-1;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(arr[j],arr[i]);
        }
    }
    //printf("Pivot:%d\n",pivot);
    //printf("High:%d\n",arr[high]);
    swap(arr[i+1],arr[high]);
    return i+1;

}
void quickSort(int arr[], int low, int high)
{
    if(low<high)
    {
        int pi= partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);

    }


}

int main()
{
    int arr[]={5,3,2,1,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,size-1);
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
