#include<stdio.h>
#include<string.h>

int main()
{

    char ch[500];

    while(gets(ch))
    {
        if(ch[0]=='*')
              break;

        int a,b,i,j,m,n,mes=0;
        float sum=0;
        m=strlen(ch);
        for(i=0;i<m;i++)
        {
            if(ch[i]=='W')
                   sum=sum+1;
            else if(ch[i]=='H')
                  sum=sum+0.5;
            else if(ch[i]=='Q')
                  sum=sum+0.25;
            else if(ch[i]=='E')
                 sum=sum+0.125;
            else if(ch[i]=='S')
                 sum=sum+0.0625;
            else if(ch[i]=='T')
                 sum=sum+0.03125;
            else if(ch[i]=='X')
                 sum=sum+0.015625;
            else if(ch[i]=='/')
            {
                if(sum==1.00)
                  {

                      mes++;
                      sum=0.00;}
                else
                {
                    sum=0.00;

                }

            }


        }
        printf("%d\n",mes);


    }

    return 0;
}
