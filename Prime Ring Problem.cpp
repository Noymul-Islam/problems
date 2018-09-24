#include<cstdio>
#include<cmath>
#include<vector>
#include<iostream>
#include<cstring>
using namespace std;

void call();
//int prime[51];
char ch[500];

void seive()
{
    int i,j,m,n,root;
    memset(ch,'1',sizeof(ch));

    ch[0]='0';
    ch[1]='0';
    root=sqrt(51);
    for(i=2;i<=root;i++)
    {
        if(ch[i]=='1')
        {
            for(j=2;i*j<=500;j++)
            {
                ch[i*j]='0';
            }

        }
    }

}
int  ar[50];
int taken[50];
 int n;
 vector<int>res;
int main()
{
   // freopen("in.txt","w",stdout);
    seive();
    int blank=0;
   // for(int i=0;i<50;i++)
     //    printf("%c\n",ch[i]);
     int cs=1;
    while(scanf("%d",&n)==1)
    {

        for(int i=0;i<n;i++)
              {ar[i]=i+1;
                taken[i]=0;
              }
        res.push_back(1);
        taken[0]=1;
        if(blank)
             printf("\n");
        printf("Case %d:\n",cs++);
        call();
       // printf("\n");
        res.clear();
        blank=1;

    }
    return 0;
}
void call()
{
    if(res.size()==n)
    {
        if(ch[res[0]+res[res.size()-1]]!='1')
               return;
        for(int i=0;i<n;i++)
        {
            if(i==n-1)
                  printf("%d\n",res[i]);
            else
                printf("%d ",res[i]);


        }
        return;
    }
    for(int i=0;i<n;i++)
    {

        if(taken[i]==0)
        {
            int take=res[res.size()-1]+ar[i];
            if(ch[take]=='1')
            {

                taken[i]=1;
                res.push_back(ar[i]);
                call();
                taken[i]=0;
                res.pop_back();
            }


        }
    }


}
