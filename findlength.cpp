#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int size)
{
    for(int i=1;i<size;i++)
    {
        int j=i-1;
        int key= arr[i];
        while(j>=0 && key<arr[j])
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    for(int i=0;i<size;i++)
         printf("%d ",arr[i]);
         printf("\n");

}
void selectionSort(int arr[], int size)
{
    for (int i=0;i<size-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<size;j++)
            {
                if(arr[minIndex]>arr[j])
                   minIndex=j;
            }
            swap(arr[i],arr[minIndex]);
    }
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
        printf("\n");

}
void bubleSort(int arr[], int size)
{
    for(int i=0;i<size-1;i++)
     for(int j=0;j<size-1-i;j++)
     {
         if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);

     }
     for(int i=0;i<size;i++)
         printf("%d ",arr[i]);
         printf("\n");
}
int partition(int arr[], int l,int h)
{
    int pivot= arr[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++)
    {
        if(arr[j]>=pivot)
          {i++;
          swap(arr[i],arr[j]);
          }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}
void QuickSort(int arr[], int l, int h)
{
    if(l<h)
    {int pi= partition(arr,l,h);
    QuickSort(arr,l,pi-1);
    QuickSort(arr,pi+1,h);
    }

}
void merge(int arr[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2= r-m;
    int L[n1],R[n2];
    for (int i=0;i<n1;i++)
        L[i]=arr[l+i];
    for(int j=0;j<n2;j++)
        R[j]=arr[m+1+j];
    int i=0,j=0,k=l;
    while(i<n1&&j<n2)
    {
        if(L[i]<R[j])
        {
            arr[k]=L[i];
            i++;
            k++;

        }
        else
        {
            arr[k]=R[j];
            j++;
            k++;
        }

    }
    while(i<n1)
        arr[k++]=L[i++];
    while(j<n2)
        arr[k++]=R[j++];

}
void mergeSort(int arr[],int l,int r)
{
    if(l<r)
    {
    int m= (l+r)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
    }
}
int main()
{
    int arr[]={2,5,1,0,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,size);
    selectionSort(arr,size);
    bubleSort(arr,size);
    QuickSort(arr,0,size-1);
    for(int i=0;i<size;i++)
       printf("%d ",arr[i]);
       printf("\n");
    mergeSort(arr,0,size-1);
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
        printf("\n");
    return 0;
}
