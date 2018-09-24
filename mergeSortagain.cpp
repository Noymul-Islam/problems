#include<cstdio>

using namespace std;

void merge(int arr[],int l, int m, int h)
{
    int n1= m-l+1;
    int n2= h-m;
    int L[n1], R[n2];
    for(int i=0;i<n1;i++)
        L[i]=arr[l+i];
    for(int j=0;j<n2;j++)
        R[j]=arr[m+j+1];
    int i=0,j=0,k=l;
    while(n1>i && n2>j)
    {
        if(L[i]<R[j])
        {
            arr[k++]=L[i++];
        }
        else
            arr[k++]=R[j++];

    }
    while(n1>i)
        arr[k++]=L[i++];
    while(n2>j)
        arr[k++]=R[j++];
}
void mergeSort(int arr[],int l, int h)
{

    if(l<h)
    {
       int m=(l+h)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,h);
        merge(arr,l,m,h);

    }
}
int main()
{
   int  arr[]={5,3,2,4,7};
    int n =sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++)
      printf("%d ",arr[i]);
    return 0;
}
