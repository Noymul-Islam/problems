/*
Shamim Ehsan
SUST CSE 12
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<deque>
#include<algorithm>
#define PI (2* acos(0))
#define pb push_back
#define ll long long
using namespace std;
//int X[]= {0,0,1,-1};
//int Y[]= {-1,1,0,0};
//int X[]= {0,0,1,1,1,-1,-1,-1};
//int Y[]= {-1,1,0,1,-1,0,1,-1};

char X[110],Y[110];
int i,j,m,n,c[110][110];
string STR[110][110];
int LCS()
{
    m=strlen(X);
    n=strlen(Y);
    for (i=1; i<=m ; i++ ) c[i][0]=0,STR[i][0]="\0";
    for (j=0; j<=n; j++ ) c[0][j]=0,STR[0][j]="\0";
    for (i=1; i<=m ; i++ )
        for (j=1; j<=m; j++ )
            if(X[i-1]==Y[j-1])
            {
                c[i][j]=c[i-1][j-1]+1;
// b[i][j]=1;
                STR[i][j]=STR[i-1][j-1]+X[i-1];
// cout<<STR[i][j]<<endl;
            }
            else if(c[i-1][j]>c[i][j-1])
            {
                c[i][j]=c[i-1][j];
                STR[i][j]=STR[i-1][j];
            }
            else if(c[i-1][j]<c[i][j-1])
            {
                c[i][j]=c[i][j-1];
                STR[i][j]=STR[i][j-1];
            }
            else
            {
                c[i][j]=c[i-1][j];
                STR[i][j]=min(STR[i-1][j],STR[i][j-1]);
            }
    return c[m][n];
}

char co[110];
int main()
{
    int t;
    scanf("%d",&t);
    gets(X);
    for(int cs=1; cs<=t; cs++)
    {
        gets(X);
        gets(X);
        gets(Y);
        if(strlen(X)<strlen(Y))
        {
            strcpy(co,X);
            strcpy(X,Y);
            strcpy(Y,co);
        }
        int ans=LCS();
// for(int i=1; i<=m; i++)
//
// {
// for(int j=1; j<=n; j++)
// printf("(%d%d) (%c%c) ",c[i][j],b[i][j],X[i-1],Y[j-1]);
// puts("");
// }
        printf("Case %d: ",cs);

        if(ans!=0)
// printlcs(m,n);
            cout<<STR[m][n];
        else
            printf("");
        printf("\n");
    }
    return 0;
}
