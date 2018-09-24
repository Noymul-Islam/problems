#include<stdio.h>
int main()
{

    int n,d,r;

    while(scanf("%d %d %d",&n,&d,&r)==3)
    {


        if(n==0&&d==0&&r==0)
              break;
        int mor[n],eve[n],i,j,m,c,sum=0,p=0;


        for(i=0;i<n;i++)
        {

            scanf("%d",&mor[i]);

        }

        for(i=0;i<n;i++)
        {
            scanf("%d",&eve[i]);
        }

        for(i=0;i<n-1;i++)
        {

            for(j=i+1;j<n;j++)
            {
                if(mor[i]>mor[j])
                {
                    c=mor[j];
                    mor[j]=mor[i];
                    mor[i]=c;
                }
            }
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(eve[i]<eve[j])
                {
                    c=eve[j];
                    eve[j]=eve[i];
                    eve[i]=c;
                }

            }

        }

        for(i=0;i<n;i++)
        {
            mor[i]=mor[i]+eve[i];
            if(mor[i]>d)
            {
                m=mor[i]-d;
                sum=sum+(m*r);
            }

        }


        printf("%d\n",sum);
    }

    return 0;
}

