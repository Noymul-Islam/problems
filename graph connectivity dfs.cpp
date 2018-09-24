#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>

using namespace std;
int large ;
 int grid[27][27];
 int color[27];
void dfs(int i)
{
   // if(i>large)
     //eturn ;

     for(int k=1;k<=large;k++)
     {
         if(grid[i][k]==1&&color[k]==0)
         {
             color[k]=1;
              dfs(k);
         }

     }

}


int main()
{

    int cases,line=0;
    cin>>cases;
    getchar();
    getchar();

    while(cases--)
    {

    if(line!=0)
         cout<<"\n";
     line =1;
              char c;
        cin>>c;
         getchar();
         large=c-64;
        //grid[large+1][large+1];
        //color[large+1][large+1];

        char s[3];
        while(gets(s))
        {
            if(s[0]=='\0')
                  break;

    int m=s[0]-64;
    int n=s[1]-64;
       grid[m][n]=1;
       grid[n][m]=1;


        }
        for(int i=1;i<=large;i++)
             grid[i][i]=1;
              int number =0;
        for(int i=1;i<=large;i++)
        {
            for(int j=1;j<=large;j++)
            {
                if(grid[i][j]==1&&color[i]==0)
                {
                    color[i]=1;
                      number++;
                    dfs(i);

                }

            }



        }
        cout<<number<<"\n";
        memset(grid,0,sizeof(grid));
        memset(color,0,sizeof(color));

    }
    return 0;
}
