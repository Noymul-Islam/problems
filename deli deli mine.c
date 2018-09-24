#include<stdio.h>
#include<string.h>

int main()
{
    int L,N;
    while(scanf("%d %d",&L,&N)==2)
    {
        getchar();

        char ch[L][100];
        int i,j;
        for(i=0;i<L;i++)
             gets(ch[i]);

        for(i=0;i<N;i++)
        {
            int m,n,a,b,k,p=0,c,z;
            char ch1[100];

            scanf("%s",ch1);

            m=strlen(ch1);
            for(j=0;j<L;j++)
            {
                c=0;
                n=strlen(ch[j]);
                for(k=0;ch[j][k]!=' ';k++)
                {

                    if(ch[j][k]!=ch1[k])
                           break;

                    else if(ch[j][k]==ch1[k])
                    {
                        c++;


                    }
                }
                  if(c==m)
                  {

                   for(z=c+1;z<n;z++)
                   {
                       printf("%c",ch[j][z]);
                   }
                   printf("\n");
                     p++;

                     break;
                  }}

                if(p==0)
                {

                    if(ch1[m-1]=='y'&&(ch1[m-2]!='a'&&ch1[m-2]!='e'&&ch1[m-2]!='i'&&ch1[m-2]!='o'&&ch1[m-2]!='u'))
                    {

                        ch1[m-1]='i';
                        ch1[m]='e';
                        ch1[m+1]='s';
                        ch1[m+2]='\0';
                        printf("%s\n",ch1);
                    }

                 else if(ch1[m-1]=='o'||ch1[m-1]=='s'||ch1[m-1]=='x'||(ch1[m-1]=='h'&&ch1[m-2]=='c')||(ch1[m-1]=='h'&&ch1[m-2]=='s'))
                 {
                     ch1[m]='e';
                     ch1[m+1]='s';
                     ch1[m+2]='\0';

                     printf("%s\n",ch1);

                 }
                 else
                 {
                     ch1[m]='s';
                     ch1[m+1]='\0';
                     printf("%s\n",ch1);


                 }

                }

                }
        }

        return 0;
}
