#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<map>

using namespace std;
 int color[100][100];
  void dfs(int i, int j);
   int c;
     int n;
     char mat[105][105];
int main()
{

      scanf("%d",&n);
        getchar();

    for(int i=0;i<n;i++)
         gets(mat[i]);
           int k=0;
       for(int i=0;i<n;i++)
        {for(int j=0;j<n;j++)
        {


               //if(color[i][j]==0)
               //{
                   color[i][j]=1;
                     c=0;
                   dfs(i,j);
                    //printf("%d\n",c);
                    if(c%2!=0)
                    {
                        k++;
                         break;

                    }
               //}



        }
          if(k!=0)
             break;
        }
         if(k!=0)
           printf("NO\n");
            else
             printf("YES\n");


    return 0;
}

void dfs(int i, int j)
{
    //if(i>=n||j>=n||i<0||j<0)
      //return;

    //if(mat[i][j]=='x')
         //{


          //return ;

         //}
         if(i+1>=n||i-1<0||j+1>=n||j-1<0)
           return ;

         if(mat[i+1][j]=='o')
            {
                c++;
                return ;}
           else if(mat[i-1][j]=='o')
                {c++;
              return;}
             else if(mat[i][j+1]=='o')
                 {

                  c++;
                return ; }
                else if(mat[i][j-1]=='o')
                   {c++;
                   return ;}

    //dfs(i+1,j);
     //dfs(i-1,j);
      //dfs(i,j+1);
      //dfs(i,j-1);

}
