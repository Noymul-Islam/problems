#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;
#define size 20000000

char ch[size];
void seive()
{
    int root,i,j,m;
    memset(ch,'1',sizeof(ch));
    root=sqrt(size);
    ch[0]='0';
    ch[1]='0';
    for(i=2;i<=root;i++)
    {
        if(ch[i]=='1')
        {
            for(j=2;i*j<=size;j++)
                ch[i*j]='0';

        }


    }
}




int main()
{
  seive();
    int n;
    while(scanf("%d",&n)==1)
    {

        int i,j,m,k,sum=0;

        for(i=1;;i++)
        {
            if(ch[i]=='1')
            {
                if(ch[i]=='1'&&ch[i+2]=='1')
                      sum++;


            }

            if(sum==n)
                    break;
        }

        printf("(%d, %d)\n",i,i+2);
    }
    return 0;
}
