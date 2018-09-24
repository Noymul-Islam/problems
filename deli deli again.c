#include<stdio.h>
#include<string.h>

struct pop
{
    char word[100];
    char pword[100];

} a[100];

int main()
{
    int L,N;
    while(scanf("%d %d",&L,&N)==2)
    {
        int i,j;
        for(i=0;i<L;i++)
            scanf("%s %s",&a[i].word,&a[i].pword);
        for(i=0;i<N;i++)
        {
            char ch[100];
            int m,n,k=0;
            scanf("%s",ch);
            for(j=0;j<L;j++)
            {
                if(strcmp(ch,a[j].word)==0)
                {
                    printf("%s\n",a[j].pword);
                    k++;
                    break;
                }
            }
            if(k==0)
            {
                m=strlen(ch);

                if(ch[m-1]=='y'&&(ch[m-2]!='a'&&ch[m-2]!='e'&&ch[m-2]!='i'&&ch[m-2]!='o'&&ch[m-2]!='u'))
                {
                    ch[m-1]='i';
                    ch[m]='e';
                    ch[m+1]='s';
                    ch[m+2]='\0';
                    printf("%s\n",ch);
                }
                else if(ch[m-1]=='o'||ch[m-1]=='s'||ch[m-1]=='x'||(ch[m-2]=='c'&&ch[m-1]=='h')||(ch[m-2]=='s'&&ch[m-1]=='h'))
                {

                    ch[m]='e';
                    ch[m+1]='s';
                    ch[m+2]='\0';
                    printf("%s\n",ch);
                }
                else
                {
                    ch[m]='s';
                    ch[m+1]='\0';
                    printf("%s\n",ch);
                }


            }


        }


    }
    return 0;
}
