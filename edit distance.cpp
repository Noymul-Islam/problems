#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int mat[300][300],m,n;
char x[30],y[30],c[300][300];

void ed()
{

    int n=strlen(x);
    int m=strlen(y);
    int i,j;
    memset(mat,0,sizeof(mat));

    int count =0;
    int mx;
    mx=max(m,n);
    for(int i=0; i<=mx; i++)
    {
        mat[0][i]=count;
        mat[i][0]=count;
        count++;
    }
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {

            if(x[i-1]==y[j-1])
            {
                mat[i][j]=mat[i-1][j-1];
                c[i][j]='d';
            }
            else if(mat[i-1][j]<mat[i][j-1])
            {

                mat[i][j]=mat[i-1][j]+1;
                c[i][j]='u';
            }
            else
            {
                mat[i][j]=mat[i][j-1]+1;
                c[i][j]='l';
            }
        }
    }
    printf("%d\n",mat[m][n]);
}
int main()
{
    gets(x);
    gets(y);
    ed();
    return 0;
}
