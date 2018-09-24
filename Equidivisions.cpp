#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

void dfs(int i,int j);
int ar[500][500];
int color[500][500];
int taken[500],p;
 int n;
int main()
{

    while(scanf("%d",&n)==1)
    {
        if(n==0)
               break;
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n*2;j++)
            {
                cin>>ar[i][j];

            }

        }
        memset(color,0,sizeof(color));
        memset(taken,0,sizeof(taken));
        int z=0;
        for(int i=0;i<n-1;i++)
            for(int j=0;j<n*2;j++)
        {
            if(color[i][j]==0&&taken[ar[i][j]]==0)
            {
                taken[ar[i][j]]=1;
                p=ar[i][j];
                dfs(i,j);

            }
            else if(!color[i][j]&&taken[ar[i][j]])
            {
                z++;
                break;
            }
        }
        if(z)
            cout<<"wrong"<<endl;
        else
             cout<<"good"<<endl;
    }


    return 0;
}
void dfs(int i,int j)
{
    if(i<0||j<0||i>=n-1||j>=2*n||ar[i][j]!=p)
     return ;

    if(color[i][j]==0)
    { color[i][j]=1;
        dfs(i+1,j);
    dfs(i-1,j);
    dfs(i,j+1);
    dfs(i,j-1);}
    return;

}
