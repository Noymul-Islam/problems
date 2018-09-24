#include<stdio.h>
#include<string.h>
int main()
{
    int a,b;
    scanf("%d",&a);
        for(b=1;b<=a;b++)
        {
            int tot,i,j,m,n,BD=0,WW=0,AB=0,TT=0,k;
            scanf("%d",&tot);
              getchar();
            char ch[tot+1];

        gets(ch);

        m=strlen(ch);
        for(i=0;i<m;i++)
        {
            if(ch[i]=='B')
              BD++;
              else if(ch[i]=='W')
                  WW++;
              else if(ch[i]=='A')
                 AB++;
              else if(ch[i]=='T')
               TT++;


        }
        if((BD+AB==tot)&&BD!=0)
             printf("Case %d: BANGLAWASH\n",b);
        else if((WW+AB==tot)&&WW!=0)
              printf("Case %d: WHITEWASH\n",b);
        else if ((BD==WW&&(BD!=0&&WW!=0))||((TT+AB)==tot&&TT!=0))
              printf("Case %d: DRAW %d %d\n",b,BD,TT);
        else if(AB==tot)
              printf("Case %d: ABANDONED\n",b);
          else if(BD>WW)
             printf("Case %d: BANGLADESH %d - %d\n",b,BD,WW);

          else if(WW>BD)
              printf("Case %d: WWW %d - %d\n",b,WW,BD);
        }
    return 0;
}
