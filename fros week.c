#include<stdio.h>

int main()
{

    int a;
    while(scanf("%d",&a)==1)
    {
        int b[a],c=0,i,j,m;
        for(i=0;i<a;i++)
             scanf("%d",&b[i]);

        for(i=0;i<a-1;i++)
        {
            for(j=i+1;j<a;j++)
            {
                if(b[j]<b[i])
                {
                    m=b[j];
                    b[j]=b[i];
                    b[i]=m;
                    c++;
                }

            }

        }
        printf("%d\n",c);
    }
    return 0;
}
