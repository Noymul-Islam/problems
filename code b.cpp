#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    long long int sub, per_time;
    scanf("%I64d %I64d",&sub,&per_time);

    long long int ar[sub];

    for(int i=0;i<(int)sub;i++)
    {
        scanf("%I64d",&ar[i]);

    }
    sort(ar,ar+sub);
     long long int ans=0;
    for(int i=0;i<(int)sub;i++)
        {

            ans=ans+(ar[i]*per_time);
            if(per_time!=1)
                 per_time--;

        }
        printf("%I64d\n",ans);

    return 0;
}
