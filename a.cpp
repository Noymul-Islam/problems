#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>

using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    int ar[n+1],ar1[n+1];

    for(int i=1;i<n;i++)
          cin>>ar[i];
    memset(ar1,0,sizeof(ar1));
    ar1[1]=1;
    for(int i=1;i<n;)
    {
        //if(i+ar[i]<=n)
        ar1[i+ar[i]]=1;
          i=i+ar[i];
    }
    if(ar1[t]==1)
        printf("YES\n");
    else
        printf("NO\n");


    return 0;
}
