#include<cstdio>
#include<cmath>
#include<cstring>

using namespace std;

int main()
{
     long long int n,r;
    while(scanf("%lld %lld",&n,&r)==2)
    {
        if(n==0&&r==0)
              break;
       long long int a,b,c,res=1,multy=1,n_r,i,j;
        n_r=n-r;
        if(r>n_r)
        {
             long long int k=r;
            r=n_r;
            n_r=k;

        }
         j=1;
        for(i=n;i>=n_r;i--)
        {

            for(;j<=r;j++,i--)
            {
                res=res*i;
                multy=multy*j;
                if(res%multy==0)
                {
                    res=res/multy;
                    multy=1;

                 }

             }
            if(i>n_r)
            {res=res*i;
            i--;
            }


        }
        printf("%lld things taken %lld at a time is  %lld exactly.\n",n,r,res);

    }

    return 0;
}
