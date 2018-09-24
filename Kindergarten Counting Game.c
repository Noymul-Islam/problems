#include<stdio.h>
#include<string.h>

int main()
{
    char ch[1000];

    while(gets(ch))
    {

        char ch1[1000];

        int i,j=0,m,n,sum=0;

        m=strlen(ch);

        for(i=0;i<m;i++)
        {
            if(((ch[i]==' ')&&(ch[i+1]!=' '))|| ((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='A'&&ch[i]<='Z')))
            {
                ch1[j]=ch[i];
                j++;

            }
            else
                 continue;


        }
        ch1[j]='\0';
        n=strlen(ch1);
        for(i=0;i<n;i++)
        {
            if(ch1[i]==' ')
                 sum++;
        }

if(ch1[j-1]!=' ')
    sum++;

        printf("%d\n",sum);

    }

    return 0;
}
