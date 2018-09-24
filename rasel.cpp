#include<stdio.h>


void emptydp(void);
int bc(int n, int r);

int dp[31][31]; /*Maximum n=30*/



int main()
{
    emptydp();
    int n, r;
    while(scanf("%d %d", &n, &r)==2)
        printf("%d\n", bc(n,r));

    return 0;
}

void emptydp(void)
{
    int i=0, j;
    for(; i<31; i++)
        for(j=0; j<31; j++)
            dp[i][j]=-1;
    return;
}


int bc(int n, int r)
{
    if(r==1)
        return n;
    if(n==r)
        return 1;
    if(dp[n][r]!= -1)
        return dp[n][r];
    if(dp[n][n-r]!= -1)
        return dp[n][r]=dp[n][n-r];
    return dp[n][r]=dp[n][n-r]=bc(n-1,r)+bc(n-1,r-1);
}

