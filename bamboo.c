#include<stdio.h>

int main()

{
    int a,b;
    while(scanf("%d",&a)==1)
    {
        for(b=1;b<=a;b++)
        {
            int i,j,m,n,k,z=0,p;
            scanf("%d",&m);
        int c[m];
            for(i=0;i<m;i++)
                scanf("%d",&c[i]);


            j=c[0];

            for(i=1;i<m;i++)
            {
                n=c[i]-c[i-1];

                if(n==j)
                      j++;
                else if(n>j)
                     j=n;
               else if(n==j-1)
                {
                    p=j;
                    z++;

                }




            }
            if(z>1&&j<=p)
                       j++;
            printf("Case %d: %d\n",b,j);

        }
    }

    return 0;
}
