#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    while(scanf("%d",&t)==1)
    {
        int ar[t+1];
        //int ans=10000000;
        for(int i=0;i<t;i++)
        {
            scanf("%d",&ar[i]);


        }
       // sort(ar,ar+t);
        int ans=0,k;
        for(int i=0;i<t-1;i++)
        {
            int c=10000000;
            if(ar[i]==10000)
                 continue;
            for(int j=i+1;j<t;j++)
        {
            if(ar[j]==10000)
                 continue;

          int res=abs(ar[i]-ar[j]);
          int res1=abs(24-abs(ar[i]-ar[j]));
           if(c>min(res,res1))
           {
               c=min(res,res1);
               k=j;
           }

        }
        ar[k]=10000;
        ans+=c;
        }

        printf("%d\n",ans);
    }

    return 0;
}
