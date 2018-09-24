#include<cstdio>
#include<cstring>

using namespace std;

char ch[500];
int main()
{
    int n,k;
    while(scanf("%d %d",&n,&k)==2)
    {

        getchar();
        gets(ch);
        int m=strlen(ch);

     int avrg=(0+m)/2;
     if(k>avrg)
     {
         while(k!=m)
         {
             printf("RIGHT\n");
               k++;

         }
         for(int i=m-1;i>=0;i--)
         {
             printf("PRINT %c\n",ch[i]);

             if(i!=0)
                printf("LEFT\n");

         }


     }
     else
     {
         while(k!=1)
         {

             printf("LEFT\n");
             k--;

         }
         for(int i=0;i<m;i++)
         {
             printf("PRINT %c\n",ch[i]);

             if(i!=m-1)
                  printf("RIGHT\n");

         }

     }

    }
    return 0;

}
