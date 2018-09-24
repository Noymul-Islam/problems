#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;
int main()
{
    int t;
    while(scanf("%d",&t)==1)
    {
        int ar[t+1];
        int ans=100000000;
        for(int i=1;i<=t;i++)
        {
            if(i%2==0)
            {
                int res=abs(ar[i]-ar[i-1]);
                int res1=abs(24-(abs(ar[i]-ar[i-1])));
                if(min(res1,res)<ans)
                {
                    ans=min(res1,res);
                }

            }


        }
        printf("%d\n",ans);
    }

    return 0;
}

