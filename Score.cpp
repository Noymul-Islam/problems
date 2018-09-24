#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
    int T,b;

    while(scanf("%d",&T)==1)
    {
        getchar();

        for(b=1;b<=T;b++)
        {

            int n,m,a,sum=0,i,j=1;
            char ch[100];

           gets(ch);
            m=strlen(ch);
            for(i=0;i<m;i++)
            {

                if(ch[i]=='O')
                {
                    sum=sum+j;
                    j++;

                }
                else if(ch[i]='X')
                {
                    sum=sum+0;
                    j=1;


                }


            }

            printf("%d\n",sum);

        }






    }

    return 0;

}
