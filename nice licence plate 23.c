#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{

    int a,b;
    while(scanf("%d",&a)==1)
    {
        getchar();
        for(b=0;b<a;b++)
        {
            char ch[100],name[50];

            int i,j,m,n,z,k=0,sum=0,p;
            gets(ch);
            m=strlen(ch);
            for(i=4;i<m;i++)
            {
                name[k]=ch[i];
                k++;

            }
            name[k]='\0';
            z=atoi(name);
            for(i=0,n=2;i<3;i++,n--)
            {
                j=ch[i]-65;
                sum=sum+(j*(pow(26,n)));


            }

            p=abs(sum-z);

            if(p<=100)
                 printf("nice\n");
            else
                 printf("not nice\n");

        }

    }
    return 0;
}
