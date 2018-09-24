#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;

char ch[130][130];
 int color[530][530],cases,follow,number=0,k;

 void dfs(int i,int j);

 int main()
 {
     int c=0;
    scanf("%d",&cases);
      getchar();
    for(int m=1;m<=cases;m++)
    {
       //b  getchar();
        memset(color,0,sizeof(color));
//        memset(res,0,sizeof(res));
        int l=0;
        //scanf("%[^\n]",ch[0]);
        gets(ch[0]);
         k=strlen(ch[0]);

       for(int i=1;i<k;i++)
         {

            gets(ch[i]);
         }
         //for(int i=0;i<k;i++)
         //puts(ch[i]);
         //for(int i=0;i<k;i++)
          // printf("%s\n",ch[i]);

         for( int i=0;i<k;i++)
         {

             for(int j=0;j<k;j++)
             {
                 if(color[i][j]==0&&ch[i][j]=='1')
                 {
                     number=0;

                     dfs(i,j);

                 if(number>c)
                 {
                     c=number;
                 }


                 }

             }
         }
         //sort(res,res+l);

         printf("%d\n",c);

         if(m!=cases)
           printf("\n");

    }

     return 0;
 }

void dfs(int i, int j)
{
    if(i<0||j<0||i>=k||j>=k)
      return ;

       if(ch[i][j]=='1')
       {
           if(color[i][j]==0)
           {
               color[i][j]=1;
                number++;


        dfs(i,j+1);
        dfs(i,j-1);
        dfs(i+1,j);
        dfs(i-1,j);
        dfs(i+1,j+1);
        dfs(i+1,j-1);
        dfs(i-1,j+1);
        dfs(i-1,j-1);
             return;
           }


       }


}
