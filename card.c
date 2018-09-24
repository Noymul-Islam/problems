#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {

        if (n==0)
             break;
        int i,j,m,a,b=0,k=0;
      int ch[1000], ch1[500],c=1;
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
        if(n==1)
            printf("Discarded cards:");
         else
        {printf("Discarded cards: 1");}
        for(j=1;ch1[j]!=0;j++)
        {


             printf(", %d",ch1[j]);




        }

        printf("\nRemaining card: %d\n",ch[i]);


    }

    return 0;
}

