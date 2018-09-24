#include<cstdio>
#include<cmath>

using namespace std;

void chek();
char ch[40001];

int main()
{
    chek();
    int a;
    while(scanf("%d",&a)==1)
    {
        for(int cases=1;cases<=a;cases++)
        {
            printf("case #%d\n",cases);
            int mini,maxi;

            scanf("%d %d",&mini,&maxi);
            {
                int c=0;

                for(int i=mini;i<=maxi;i++)
                {
                    if(ch[i]=='1')
                    {printf("%d\n",i);
                      c++;
                    }

                }
                if(c==0)
                    printf("no kaprekar numbers\n");
            }
         if(cases!=a)
         printf("\n");

        }



    }
    return 0;
}
void chek()
{
    ch[1]='1';

    ch[9]='1';
    ch[45]='1';
    ch[55]='1';
    ch[99]='1';
    ch[297]='1';
    ch[703]='1';
    ch[999]='1';
    ch[2223]='1';
    ch[2728]='1';
    ch[4879]='1';
    ch[4950]='1';
    ch[5050]='1';
    ch[5292]='1';
    ch[7272]='1';
    ch[7777]='1';
    ch[9999]='1';
    ch[17344]='1';
    ch[22222]='1';
    ch[38962]='1';



}
