#include<cstdio>
#include<cmath>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;
vector<int>jo[1010];
vector<int>Fire[1010];
vector<int>G[1010];
char ch[1010][1010];
struct data
{
    int i,j,amount;

}ar[1010][1010];

 int taken[1000010];
  int dist[1000010];
  int dist2[1000010];
int bfj(int start);
void bff(int start);
int road;
int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        int c,r,k=0,road=0;
        char C;
        cin>>r>>c;
        getchar();
        for(int i=0;i<r;i++)
           gets(ch[i]);
           for(int i=0;i<r;i++)
           {
               for(int j=0;j<c;j++)
                    ar[i][j].amount=++k;
                    ar[i][j].i=i;
                    ar[i][j].j=j;
                    if((i==0||i==r-1||j==0||j==c-1)&&ch[i][j]!='F')
                    {
                        ar[i][j].amount=ar[i][j].amount*-1;
                        ar[i][j].i=i;
                    ar[i][j].j=j;
                    }
           }
           int track1,track2;
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
        {
            if(ch[i][j]=='J')
            {
                track1=ar[i][j].amount;
            }
            if(ch[i][j]=='F')
            {
                track2=ar[i][j].amount;
            }
            if(i-1>=0&&ch[i-1][j]!='#')
            {

                G[ar[i][j].amount].push_back(ar[i-1][j].amount);
                G[ar[i-1][j].amount].push_back(ar[i][j].amount);
            }
            if(i+1<r&&ch[i+1][j]!='#')
            {


                G[ar[i][j].amount].push_back(ar[i+1][j].amount);
                G[ar[i+1][j].amount].push_back(ar[i][j].amount);
            }
            if(j-1>=0&&ch[i][j-1]!='#')
            {

                G[ar[i][j].amount].push_back(ar[i][j-1].amount);
                G[ar[i][j-1].amount].push_back(ar[i][j].amount);

            }
            if(j+1<c&&ch[i][j+1]!='#')
            {
                G[ar[i][j].amount].push_back(ar[i][j+1].amount);
                G[ar[i][j+1].amount].push_back(ar[i][j].amount);
            }

        }
        if(track1<0)
            printf("1\n");
        else
        {
            bff(track2);
            int res=bfj(track1);
        }

    }
    return 0;
}
void bff(int start)
{

    memset(taken,0,sizeof(taken));
    taken[start]=1;
    dist[start]=0;
    queue<int>q;
    q.push(start);
    while(!q.empty())
    {
        int u=q.pop();
        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];
            if(!taken[v])
            {

                taken[v]=1;
                dist[v]=dist[u]+1;
                if(road<dist[v])
                {
                    road=dist[v];
                }
                Fire[dist[v]].push_back(v);

            }

        }

    }



}

int bfj(int start)
{
    memset(taken,0,sizeof(taken));
    taken[start]=1;
    dist2[start]=0;
    queue<int>q;
    q.push(start)
    while(!q.empty())
    {
        int u=q.pop();
        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];
            if(!taken[v])
            {
                taken[v]=1;
                dist2[v]=dist2[u]+1;

                    jo[dist[v]].push_back(v);
            }
        }

    }
}
