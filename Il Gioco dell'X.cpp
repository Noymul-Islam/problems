#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>

using namespace std;

int black_won(void);
int white_won(void);
void dfs(int i,int j);
char ch[205][205];
int color[205][205],row,c,k,cases=1,p,d;

int main()
{
    while(scanf("%d",&row)==1)
    {
        k=0,d=0;
        if(row==0)
           break;
           for(int i=0;i<row;i++)
             scanf(" %[^\n]",ch[i]);
        int a,b;
        a=black_won();
        //printf("%d\n",a);
        if(a==1)
         printf("%d B\n",cases++);
         else
         printf("%d W\n",cases++);


    }
    return 0;
}

int black_won()
{

   for(int i=0;i<row;i++)
   {
       for(int j=0;j<row;j++)
       {
           if(ch[i][j]=='b')
              {   c=i;
              //p=0;
                  dfs(i,j);
                  if(d!=0)
                    {

                     break;
                    }
              }
       }
       if(d!=0)
         break;
   }

    if(k==1)
       return 1;
        else
        return 0;
}
  void dfs(int i,int j)
  {
      if(i<0||j<0||i>=row||j>=row)
         return;
         if(ch[i][j]=='b')
         {
             if(color[i][j]==0)
             {
                 color[i][j]=1;
                //if(i>c)
                //{
                    c=i;
                    // p++;
                //}
        dfs(i,j+1);
        dfs(i,j-1);
        dfs(i+1,j);
        dfs(i-1,j);
        dfs(i+1,j+1);
        dfs(i-1,j-1);


              return;
             }

             else
             {
             //p=0;
             return;
             }
             if(c==row-1)
             {
                 d++;
                 k=1;
                 return;
             }
         }

  }
