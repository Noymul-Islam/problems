#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;
#define size 1000000
char ch[size];
int tot[1000001];
int sum=0;

void seive()
{
    int i,j,root;
    memset(ch,'1',sizeof(ch));
    ch[0]='0';
     ch[1]='0';
     root=sqrt(size);
     for(i=2;i<=root;i++)
     {
         if(ch[i]=='1')
         {
             for(j=2;i*j<=size;j++)

                ch[i*j]='0';


         }


     }
tot[0]=0;
     for(int i=1;i<=1000000;i++)
     {
         int j=i;
         if(ch[j]!='1')
         {
             tot[i]=tot[i-1]+0;
         }
         else
         {

                while(j>9)
                    {
                        sum=sum+j%10;

                        j=j/10;

                    }
                    sum+=j;
                    if(ch[sum]=='1')
                    {
                        tot[i]=tot[i-1]+1;
                    }
                    else
                         tot[i]=tot[i-1];
                         sum=0;
         }


     }
     //printf("%d\n",tot[20]);
}


    int main()
    {
        memset(tot,0,sizeof(tot));
         seive();
        int T,Case;

        scanf("%d",&T);



            for(Case=1;Case<=T;Case++)
            {
                int a,b,res,i,j,m,n,num=0;
                scanf("%d %d",&a,&b);
                int sum1=0,sum2=0;
                 int c=a,d=b;
                while(c>9)
                    {
                        sum1=sum1+c%10;

                        c=c/10;

                    }
                    sum1+=c;
                    while(d>9)
                    {
                        sum2=sum2+d%10;

                        d=d/10;

                    }
                    sum2+=d;



                /*if(a%2==0)
                    a=a+1;
                for(i=a;i<=b;i=i+2)
                {
                    j=i;
                    if(ch[j]=='1')
                    {
                        while(j>9)
                    {
                        sum=sum+j%10;

                        j=j/10;

                    }
                    sum=sum+j;
                    if(ch[sum]=='1')
                          num++;
                          sum=0;


                }
                }*/
               // printf("%c",ch[111]);
                if(ch[a]=='1'&&ch[sum1]=='1'/*&&ch[sum2]=='1'&&ch[b]=='1'*/)
                    //printf("%d\n",tot[b]-tot[a]+1);
                    //else if(ch[a]=='1'&&ch[sum1]=='1'&&ch[sum2]!='1')
                    printf("%d\n",tot[b]-tot[a]+1);
                else

                printf("%d\n",tot[b]-tot[a]);

            }



        return 0;


    }

