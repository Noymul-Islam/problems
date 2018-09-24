#include<cstdio>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    int cases,follow;
    while(scanf("%d",&cases)==1)
    {
        for(follow=1;follow<=cases;follow++)
        {
            int ampli,freq;
            scanf("%d %d",&ampli,&freq);
            for(int i=1;i<=freq;i++)
            {
                int k=1,c=0;
                for(int j=1;j<=(ampli*2)-1;j++)
                {

                    for(int n=1;n<=k;n++)
                    {
                        printf("%d",k);
                    }
                    printf("\n");
                    k++;
                    if(k>ampli)
                    {
                        k=k-2;
                        while(k>0)
                        {

                        for(int n=1;n<=k;n++)
                        {
                            printf("%d",k);
                        }
                        printf("\n");
                        k--;
                        }
                        c++;
                    }
                if(c!=0)
                     break;
                }
                   if(i!=freq)
                printf("\n");

            }




            if(follow!=cases)
                 printf("\n");
        }


    }


}
