#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,b;
    while(scanf("%d",&n)==1)
    {
        for(b=0;b<n;b++)
        {

            char ch[100],number[50];
            int i,j,m,a=2,z=0,k=0,sum=0,P,s;
            scanf(" %[^\n]",ch);
            m=strlen(ch);
            for(i=4;i<m;i++)
            {
                number[k]=ch[i];
                k++;


         }
         number[k]='\0';
         z=atoi(number);
         printf("%d\n",z);
         for(i=0,a=2;i<3;i++,a--)
        {
            s=ch[i]-65;
            printf("%d\n",s);
            sum=sum+(s*(pow(26,a)));

        }
        printf("%d\n",sum);
        P=(sum-a);
       printf("%d\n",P);
        if(P<=100)
            printf("nice\n");
        else
             printf("not nice\n");

    }
    }

    return 0;
}
