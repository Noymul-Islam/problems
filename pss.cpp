#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<vector>
#include<algorithm>
//#include<string>

using namespace std ;

char x[110],y[110];
int mat[110][110];
string st[110][110];
 int n,m;

int lcs();

int main()
{
    int t,cs=1;
    cin>>t;
    getchar();
    while(t--)
    {
        getchar();

        scanf("%s %s",x,y);

       int ans= lcs();
        if(ans==0)
         printf("Case %d: :(\n",cs++);
         else
         cout<<"Case "<<cs++<<": "<<st[n][m]<<endl;
    //     for(int i=0;i<110;i++)
//           st[i].clear();


    }
    return 0;
}

int lcs()
{
     n=strlen(x);
     m=strlen(y);
     memset(mat,0,sizeof(mat));
    for(int i=0;i<=n;i++)
        {//mat[0][i]=0;
          st[0][i]="\0";
        }
        for(int j=0;j<=m;j++)
        {
           // mat[j][0]=0;
            st[j][0]="\0";
        }
        for(int i=1;i<=n;i++)
        {

            for(int j=1;j<=m;j++)
            {

                if(x[i-1]==y[j-1])
                {

                    mat[i][j]=mat[i-1][j-1]+1;
                    st[i][j]=st[i-1][j-1]+x[i-1];

                }
                else if(mat[i-1][j]>mat[i][j-1])
                {
                    mat[i][j]=mat[i-1][j];
                    st[i][j]=st[i-1][j];

                }
                else if(mat[i][j-1]>mat[i-1][j])
                {
                    mat[i][j]=mat[i][j-1];
                    st[i][j]=st[i][j-1];

                }
                else
                {
                    mat[i][j]=mat[i-1][j];
                    st[i][j]=min(st[i-1][j],st[i][j-1]);

                }

            }
        }
        return mat[n][m];
}

