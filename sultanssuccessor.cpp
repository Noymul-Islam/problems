#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
int ar[8][8];
int grid[8][8];
int coun;
void call(int i, int j);
vector<int>v;
bool valid(int i, int j)
{
    //printf("ok");
    int m=i;
    int n=j;
    while(1)
    {

        if(m<0)
            break;
        if(grid[m][n]==1)
            return false;
        m=m-1;

    }
    m=i,n=j;
    while(1)
    {

        if(m>=8)
            break;
        if(grid[m][n])
            return false;
        m=m+1;


    }
    m=i,n=j;
    while(1)
    {

        if(n>=8)
            break;
        if(grid[m][n])
            return false;
        n=n+1;
    }
    m=i,n=j;
    while(1)
    {

        if(n<0)
            break;
        if(grid[m][n])
            return false;
        n=n-1;
    }
    m=i,n=j;
    while(1)
    {

        if(m<8&&n<8&&m>=0&&n>=0)
        {
            if(grid[m][n])
                return false;
        }
        else
            break;
        n=n+1;
        m=m-1;
    }
    m=i,n=j;
    while(1)
    {
        if(m<8&&n<8&&m>=0&&n>=0)
        {
            if(grid[m][n])
                return false;
        }
        else
            break;

        n=n-1;
        m=m-1;
    }
    m=i,n=j;
    while(1)
    {

        if(m<8&&n<8&&m>=0&&n>=0)
        {
            if(grid[m][n])
                return false;
        }
        else
            break;
        m=m+1;
        n=n+1;
    }
    m=i,n=j;
    while(1)
    {


        if(m<8&&n<8&&m>=0&&n>=0)
        {
            if(grid[m][n])
                return false;
        }
        else
            break;
        m=m+1;
        n=n-1;
    }

    //printf("ok");
    return true;

}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        memset(grid,0,sizeof(grid));
        coun=0;
        for(int i=0; i<8; i++)
            for(int j=0; j<8; j++)
                cin>>ar[i][j];
        for(int j=0; j<8; j++)
        {
            int i=0;
            //printf("yes");
            coun++;
            grid[i][j]=1;
            call(i+1,0);
           // printf("-->%d\n\n",coun);
            coun=0;
            grid[i][j]=0;
            //printf("yes");

        }
        //printf("ok");
       // printf("%d",v.size());
        sort(v.begin(),v.end());
        printf("%5d\n",v[v.size()-1]);
        v.clear();
    }
    return 0;
}
void call(int i, int j)
{
   // printf("-->%d\n",coun);
    if((i>8||j>8)&&coun<8)
        {    //printf("ok");
             return;}
    if(coun==8)
    {
       // printf("ok");
        int sum=0;
        for(int i=0; i<8; i++)
            for(int j=0; j<8; j++)
            {
                if(grid[i][j])
                {
                    sum+=ar[i][j];

                }

            }
        v.push_back(sum);
        return;
    }
    if(valid(i,j))
    {

        coun++;
        // printf("--> %d %d %d\n",i,j,coun);
        grid[i][j]=1;
        call(i+1,0);
        coun--;
        grid[i][j]=0;


    }
    //else
    //printf("no");
    call(i,j+1);
    return;

}
