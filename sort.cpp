#include<cstdio>
#include<algorithm>

using namespace std;
bool comp(int p, int q)
{
    return p>q;
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,comp);
    for (int i=0;i<n;i++)
         printf("%d\n",arr[i]);
}
