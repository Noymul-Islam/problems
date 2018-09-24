#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;
#define size 2000000
char  ar[size];
void seive()
{
    int i,j,m,n,root;
    memset(ar,'1',sizeof(ar));

    ar[0]='0';
    ar[1]='1';
    root=sqrt(size);
    for(i=2;i<=root;i++)
    {
        if(ar[i]=='1')
        {
            for(j=2;i*j<=size;j++)
            {
                ar[i*j]='0';
            }

        }
    }

}
int main()
{
    seive();
    int n;
    scanf("%d",&n);
      int k=n;
        int c=0;
      for(int i=1;i<=n/2;i++)
    {
        if(ar[i]!='1')
       {

        for(int j=n;j>n/2;j--)
        {
           if(ar[j]!='1')
           {
               if(i+j==k)
               {printf("%d %d\n",i,j);
                   c++;
                 break;
               }

           }


        }
        if(c!=0)
         break;

    }
    }

    return 0;
}
