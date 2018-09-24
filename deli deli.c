#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{

    int L,N;

    while(scanf("%d %d",&L,&N)==2)
    {

int i;
    char ch[L][35];
    char ch1[35];
    for(i=0;i<L;i++)
     {

         gets(ch[i]);
    //getchar();}
    }
    for(i=0;i<N;i++)
{
    int j,m,n,c=0,p=0,z,k;

   scanf("%s",ch1);

    {
        m=strlen(ch1[i]);
        for(j=0;j<L;j++)
        {

            n=strlen(ch[j]);
            for(k=0;ch[j][k]!=' ';k++)
            {
                if(ch[j][k]==ch1[k])
                     c++;


            }
            if(c==m)
            {
                p++;
                for(z=c+2;ch[j][z]!='\0';z++)
                  printf("%c",ch[j][z]);
                break;
            }


        }





        if(p!=0)
        {

            if(ch1[m-1]=='y')
            {
                ch1[m-1]='i';
                ch1[m]='e';
                ch1[m+1]='s';
                ch1[m+2]='\0';

                printf("%s\n",ch1);
            }
            else if(ch1[m-1]=='o'||ch1[m-1]=='s'||ch1[m-1]=='x'||(ch1[m-1]=='h'&&ch1[m-2]=='c')||(ch1[m-1]=='h'&&ch1[m-2]=='s'))
            {
                ch1[m-2]='e';
                ch1[m-1]='s';
                ch1[m]='\0';
                                printf("%s\n",ch1);

            }
            else
            {

                ch1[m]='s';
                ch1[m+1]='\0';
                                printf("%s\n",ch1);

            }

        }

    }}
    }
    return 0;
}
