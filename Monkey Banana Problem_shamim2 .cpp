#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
long long int arr[1500][1500];
int main()
{
// freopen("a.txt","r",stdin);
int t,n;
scanf("%d",&t);
for(int cs=1; cs<=t; cs++)
{
memset(arr,0,sizeof(arr));
scanf("%d",&n);
for(int i=1; i<=n; i++)
{
for(int j=i; j<i+i; j++)
{
scanf("%lld",&arr[i][j]);
}

}


/*for(int i=2; i<=n; i++)
{
for(int j=i; j<i+i; j++)
{
arr[i][j]+=max(arr[i-1][j-1],arr[i-1][j-2]);
// printf("%d ",arr[i][j]);
}
// printf("\n");
}*/
// printf("a");
for(int i=n+1; i<=n+n-1; i++)
{
for(int j=n+n-i; j<n+n-i +n+n-i; j++)
scanf("%lld",&arr[i][j]);
}

for(int i=1;i<2*n;i++)
  {
      for(int j=1;j<=n;j++)
         printf("%d",arr[i][j]);
         printf("\n");
  }

for(int i=n+1; i<=n+n-1; i++)
{
for(int j=n+n-i; j<n+n-i +n+n-i; j++)
{
arr[i][j]+=max(arr[i-1][j+1],arr[i-1][j+2]);
// printf("%d \n",arr[i][j]);

}
// printf("\n");
}
// for(int i=0;i<=n+n;i++)
// {
// for(int j=0;j<=n;j++)
//{
// printf("(%d%d%d)",arr[i][j],i,j);
//}
// printf("\n");
printf("Case %d: %lld\n",cs,arr[n+n-1][1]);
}
return 0;

}
//Chat Conversation End
