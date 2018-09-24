#include<stdio.h>
#include<string.h>

int ch[1000000], ch1[1000001];
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {

        if (n==0)
             break;
        int i,j,m,a,b=0,k=0;
      int  c=1;
      memset(ch1,0,sizeof(ch1));
      memset(ch,0,sizeof(ch));

        for(i=1;i<=n;i++)
             ch[i]=c++;

        for(i=1;ch[i+1]!=0;i++)
        {
            if(ch[i]!=0)
            {
        ch1[k]=ch[i];
            ch[i]=0;
            ch[n+1]=ch[i+1];
            ch[i+1]=0;
            k++;
            n++;
            }
        }
       /* printf("Discarded cards:");
        for(j=0;ch1[j]!=0;j++)
        {
         if(ch1[j+1]!=0)
         {
             printf(" %d,",ch1[j]);

         }
         else if(ch1[j+1]==0)
             printf(" %d",ch1[j]);

        }*/

        printf("\nRemaining card: %d\n",ch[i]);


    }

    return 0;
}
