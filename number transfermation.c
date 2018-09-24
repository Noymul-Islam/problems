#include<stdio.h>
#include<math.h>
#include<string.h>
#define size 110
char ch[size];
void seive()
{
    long long int i,j,m,n,root;
    memset(ch,'1',sizeof(ch));
    root=sqrt(size);
    ch[0]='0';
    ch[1]='0';
    for(i=2;i<=root;i++)
    {
        if(ch[i]=='1')
        {
        for(j=2;i*j<=size;j++)
        {
            ch[i*j]='0';


        }
        }
    }

}
int main()
{
    seive();
    long long int a,b,k=1;
    while(scanf("%lld %lld",&a,&b)==2)
    {
         long long int def;
        if(a==0&&b==0)
              break;
                       def=b-a;
if(def<=1)

      {if(def==0)
           {
               printf("Case %lld: %lld\n",k,def);
               k++;
           }
          else
          {printf("Case %lld: -1\n",k);

  k++;}}
    else
     {


         long long int i,j,m,n=0,c=0,sum=a,def=0;

         for(i=a-1;i>=2;)
         {
             if(ch[i]=='1')
             {
                 if(sum%i!=0)
                 {

                     while(sum<b)
                     {
                         sum=sum+i;
                         c++;
                         if(sum==b)
                         {
                             n++;
                             break;

                         }
                         else if(sum>b)
                         {
                             c=c-1;
                             //sum=a;
                             break;

                         }
                         sum=sum-i;

                     }
                     if(n!=0)
                          break;

                 }


             }



         }
         if(n!=0)
         {
             printf("Case %lld: %lld\n",k,c);
             k++;

         }
         else
         {
             printf("Case %lld: -1\n",k);
             k++;
         }


    }}

    return 0;
}
