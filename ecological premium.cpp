#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
    int cases,follow;
    while(scanf("%d",&cases)==1)
    {
        int k=0;
        for(follow=0;follow<cases;follow++)
        {
         int farmer,sum=0;
         scanf("%d",&farmer);

         for(int i=0;i<farmer;i++)
         {
             int space,animal,friendly;
             scanf("%d %d %d",&space,&animal,&friendly);

             sum=sum+ (space*friendly);


         }

           printf("%d",sum);
            if(k!=cases)
            {
                printf("\n");
                 k++;

            }

        }

    }

    return 0;
}
