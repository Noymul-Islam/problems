#include<bits/stdc++.h>

using namespace std;

void selection(int arr[],int size)
{

    for (int i=0;i<size-1;i++)
    {
        int index=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[index]>arr[j])
            {
                index=j;
            }
        }
        swap(arr[i],arr[index]);

    }
    for(int i=0;i<size;i++)
    printf("%d ",arr[i]);

}
int main()
{

    int arr[]={1,2,5,6,3,1,4,7,0};
    int size= sizeof(arr)/sizeof(arr[0]);
    selection(arr,size);
    return 0;
}
