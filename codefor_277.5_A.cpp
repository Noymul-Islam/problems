#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

struct data
{
    int i,j;
}t[10000];
int main()
{
    int n;
    cin>>n;
     long long int  ar[n];

      for(int i=0;i<n;i++)
          cin>>ar[i];
           int p=0;
           int count=0;
      for(int i=0;i<n-1;i++)
      {
       long long int c=10000000000;
       int index;
      for(int j=i+1;j<n;j++)
      {
          if(c>ar[j])
          {
              c=ar[j];
              index=j;
          }

      }
      if(ar[i]>ar[index])
      {
          int temp=ar[i];
          ar[index]=ar[i];
          ar[i]=temp;
          count++;
          t[p].i=i;
          t[p++].j=index;
      }
      }
      printf("%d\n",count);
      for(int k=0;k<p;k++)
        printf("%d %d\n",t[k].j,t[k].i);
    return 0;
}
