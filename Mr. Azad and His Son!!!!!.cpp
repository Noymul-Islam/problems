#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

char ch[35];
void seive()
{
    int root,i,j;
      memset(ch,'1',sizeof(ch));
       root=sqrt(35);
        ch[0]='0';
         ch[1]='0';

       for(i=2;i<=root;i++)
       {
           if(ch[i]=='1')
           {

               for(j=2;i*j<=35;j++)
                 ch[i*j]='0';
           }

       }

}

int main()
{
    seive();

    int p;
     while(scanf("%d",&p)==1)
     {
          if(p==0)
           break;
         if(p==11||p==23||p==29)
          printf("Given number is prime. But, NO perfect number is available.\n");
           else if(ch[p]!='1')
             printf("Given number is NOT prime! NO perfect number is available.\n");

          else
          {
              long long int ans;
               ans= pow(2,p-1)*((pow(2,p))-1);
              printf("Perfect: %lld!\n",ans);
          }


     }
    return 0;
}
