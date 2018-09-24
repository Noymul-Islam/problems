#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

char ch[25000000];

int main()
{
    int l;

    while(scanf("%d",&l)==1)
    {
        getchar();
        if(l==0)
            break;

        gets(ch);
        int ans=10000000,ans1=-1,ans2=-1;
        for(int i=0;i<strlen(ch);i++)
        {
            if(ch[i]=='Z')
            {
                ans=0;
                break;

            }
        if(ch[i]=='R')
        {
            ans1=i;

        }
        if(ch[i]=='D')
        {
            ans2=i;

        }
         if(ans1>=0&&ans2>=0)
         {

             ans=min(ans,abs(ans1-ans2));

         }

        }
        printf("%d\n",ans);

    }

    return 0;
}
