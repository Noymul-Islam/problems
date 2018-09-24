#include<cstdio>
#include<iostream>
#include<cstring>
#include<vector>
#include<cmath>
#include<algorithm>
#include<queue>

using namespace std;
#define ll long long
int main()
{
    ll int n,x;
    cin>>n>>x;
    ll int ar[n][2];
    for(int i=0;i<n;i++)
    {
        scanf("%I64d %I64d",&ar[i][0],&ar[i][1]);

    }
    ll int sum=0,tot=0;
 for(int i=0;i<n;i++)
 {


    while(tot<ar[i][0])
    {
        tot+=x;
        if(tot>=ar[i][0])
        {
            if(tot>ar[i][0])
            {
                tot-=x;
                break;
            }
            else
            {
                break;

            }

        }
    }
    if(tot==ar[i][0])
    {
     sum+=ar[i][1]-tot+1;
    }
    else
     sum+=ar[i][1]-ar[i][0]+(ar[i][0]-tot);
     if(tot==0)
     {
         tot=ar[i][1]+1;
     }
    // else
      //  tot++;
}
printf("%I64d\n",sum);



    return 0;
}
