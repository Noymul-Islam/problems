#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

 #define max 1000001
char ch[max];
bool comp(int a,int b)
{
    return a>b;
}
void seive(void)
{
    int i,j,m,n,root;
    root=sqrt(max);
    memset(ch,'1',sizeof(ch));
     ch[0]='0';
     ch[1]='0';
     for(i=2;i<=root;i++)
     {

         for(j=2;i*j<=max;j++)
         {
             ch[i*j]='0';

         }
     }


}

int main()
{
     seive();
    int T,follow;
    while(scanf("%d",&T)==1)
    {
          int Count[100]={0};

        for(follow=1;follow<=T;follow++)
        {
           int lower ,upper,i,j,m,n,sum;
           scanf("%d %d",&lower,&upper);
           for(i=lower;i<=upper;)
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
                       sum=j-i;
                       Count[sum]++;

                       i=j;
                   }



               }
               else
                  i++;



           }


           sort(Count,Count+100,comp);
           if((Count[0]==Count[1])||(Count[0]==1))
                  printf("No jumping champion\n");
           else
              printf("The jumping champion is %d\n",Count[0]);

        }

    }

    return 0;
}
