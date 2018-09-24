#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

#define size 20000000;
char ch[size];

void seive();
int main()
{seive();
  int T;
  scanf("%d",&T);
  while(t--)
  {
      int upper , lower,d=0,ans;
        int dif[2000],j,c=0;
        memset(dif,0,sizeof(dif))
        scanf("%d %d",&lower,&upper);
        for(int i=lower;i<=upper;)
        {
            if(ch[i]=='1')
            {
                j=i+1;
                while(ch[j]!='1')
                {
                    j++;

                }
                if(ch[j]=='1')
                {

                    int k=ch[j]-ch[i];
                    if(k>c)
                          c=k;

                    dif[k]++;


                }

            }
            else
                 i++;

        }
        for(int i=1;i<=c;i++)
        {
            if(dif[i]>d)
            {
                d=dif[i];
                ans=i;

            }


        }

             printf("%d\n",ans);

  }
return 0;
}
void seive()
{
    int i,j,m,n,root;
    memset(ch,'1',sizeof(ch));
    root=sqrt(size);
    ch[1]='0';
    ch[0]='0';
    for(i=2;i<=root;i++;)
    {
        if(ch[i]=='1')
        {
        for(j=2;j*i<=size;j++)
         {
             ch[i*j]='0';

         }
        }
    }
}

}
