#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
     int n,k;
     scanf("%d %d",&n,&k);
     int ar[n+1];
     ar[0]=0;
     for(int i=1;i<=n;i++)
       scanf("%d",&ar[i]);
       sort(ar,ar+n+1);
        int sum=0;
       for(int i=n;i>=1;i=i-k)
       {
           sum=sum+(ar[i]-1)*2;



       }
       printf("%d\n",sum);

    return 0;
}

