#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    int n;

    while(scanf("%d",&n)==1)
    {
        for(int b=1;b<=n;b++)
        {

            char ch[150000];
            int c=0;
            scanf("%s",ch);
            int l=strlen(ch);
            int sets;
            scanf("%d",&sets);

            int number[sets];

            for(int j=0;j<sets;j++)
                 scanf("%d",&number[j]);


            for( int k=0;k<sets;k++)
            {
                int z,p=0;

                for(int m=0;m<l;m++)
                {

                    z=p*10+ch[m]-'0';
                    p=z%number[k];




                }
                if(p==0)
                     c++;


            }
            if(c==sets)
                 printf("%s - Wonderful.\n",ch);
            else
                printf("%s - Simple.\n",ch);




        }



    }

    return 0;
}
