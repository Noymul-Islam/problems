#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cstdlib>
#include<iostream>

using namespace std;
void dfs(int i, int j);
char land[30][30];
int color[30][30],cases,follow,k,c;

int main()
{
    scanf("%d",&cases);

        getchar();
        for(follow=1;follow<=cases;follow++)
        {
            getchar();
            memset(color,0,sizeof(color));
            int maxi=0;
            //scanf("%[^\n]",land[0]);
             gets(land[0]);
             k=strlen(land[0]);
            // printf("%d\n",k);

            for(int i=1;i<k;i++)
            {
                 //scanf(" %[^\n]",land[i]);
                  gets(land[i]);
            }
            for(int i=0;i<k;i++)
            {

                for(int j=0;j<k;j++)
                {
                    if(land[i][j]=='1')
                    {if(color[i][j]==0)
                       {
                           c=0;
                       dfs(i,j);

                        if(c>maxi)
                        {
                            maxi=c;

                        }
                    }}


                }
            }

            printf("%d\n",maxi);

            if(follow!=cases)
               printf("\n");


        }



    return 0;
}

void dfs(int i, int j)
{

    if(i<0||j<0||i>=k||j>=k)
       return;
       if(land[i][j]=='1')
       {
           if(color[i][j]==0)
           {
               color[i][j]=1;
               c++;
                dfs(i-1,j);

    dfs(i,j+1);
        dfs(i,j-1);
        dfs(i+1,j);
        dfs(i-1,j);
        dfs(i+1,j+1);
        dfs(i+1,j-1);
        dfs(i-1,j+1);
        dfs(i-1,j-1);
     return ;
           }


       }

}
