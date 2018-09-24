
#include<bits/stdc++.h>

using namespace std;

void insertionSort(int arr[],int size)
{
    for(int i=1;i<size;i++)
    {
        //printf("Hello");
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            //printf("Hello");
            arr[j+1]=arr[j];
            j=j-1;

        }
        arr[j+1]=key;
    }
    for(int i=0;i<size;i++)
         printf(" %d",arr[i]);

}
int main()
{
    int arr[]={1,1,-3,5,1,2,0,4};
    int size= sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,size);
    return 0;
}
