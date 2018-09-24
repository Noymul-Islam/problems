#include<cstdio>
#include<cstring>
using namespace std;
char game[5],temp[100];
int main()
{
    int t,cases=1;
    scanf("%d",&t);
    while(t--)
    {
        int number;
         scanf("%d",&number);
        getchar();
         int num=0,c=0,k=0,tot=0;
    for(int i=1;i<=number;i++)
           {
               gets(game);
               temp[k++]=game[0];
           }
           for(int i=0;i<k;i++)
              {

               if(temp[i]=='L'||temp[i]=='D')
               {
                   num++;
                   tot++;
                   if(num==3)
                   {
                       c++;
                       break;
                   }
               }
               else if(temp[i]=='W')
               {
                   num=0;
                    tot++;

               }



           }


        if(c!=0)
             printf("Case %d: %d\n",cases++,tot);
        else
            printf("Case %d: Yay! Mighty Rafa persists!\n",cases++);


    }
    return 0;
}
