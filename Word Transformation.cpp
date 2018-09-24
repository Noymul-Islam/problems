#include<cstdio>
#include<iostream>
#include<queue>
#include<cmath>
#include<queue>
#include<vector>
#include<map>
#include<cstring>
using namespace std;

int bfs(int source,int dest);
map<string,int>mp;

vector<int>G[210];
       int count;
int main()
{
    int t,c=0;
    cin>>t;
    while(t--)
    {
         if(c)
            printf("\n");
        c=1;
        char ch[210][15];
        getchar();
        //getchar();
        int k=1;
   count=1;
        while(gets(ch[k]))
        {
            if(ch[k][0]=='*')
                  break;
           // k++;
            if(mp.find(ch[k])==mp.end())
            {
                mp[ch[k]]=count++;
            }
            k++;
        }
        //printf("l");
        for(int i=0;i<k-1;i++)
        {//printf("5");
            for(int j=i+1;j<k;j++)
            {
                if(strlen(ch[i])==strlen(ch[j]))
                {
                    int len=strlen(ch[i]),num=0;
                    for(int p=0;p<len;p++)
                    {
                        if(ch[i][p]!=ch[j][p])
                               num++;

                    }
                    if(num==1)
                    {
                        G[mp[ch[i]]].push_back(mp[ch[j]]);
                        G[mp[ch[j]]].push_back(mp[ch[i]]);

                    }

                }

            }

        }

        char s1[15],s2[15];
        while(scanf("%[^\n,' ']",s1)==1)
    {

           //if(strlen(s1)==0)
            // break;
           // printf("%s",s1);
        scanf("%s",s2);
        getchar();
        int res=bfs(mp[s1],mp[s2]);

        printf("%s %s %d\n",s1,s2,res);}
        for(int i=0;i<=210;i++)
              G[i].clear();
        mp.clear();
    }

    return 0;
}


int bfs(int source,int dest)
{
    int taken[210];
    memset(taken,0,sizeof(taken));
    queue<int>q;
    taken[source]=1;
    q.push(source);
    int dist[210];
    memset(dist,0,sizeof(dist));
    dist[source]=0;
    if(source==dest)
        return dist[source];
    while(!q.empty())
    {int u=q.front();
    q.pop();
    for(int i=0;i<G[u].size();i++)
    {
        int v=G[u][i];
        if(!taken[v])
        {
            taken[v]=1;
            dist[v]=dist[u]+1;
            if(v==dest)
                //printf("%d\n",dist[v]);
                return dist[v];
            q.push(v);

        }

    }


    }

}


/*1

dip
lip
mad
map
maple
may
pad
pip
pod
pop
sap
sip
slice
slick
spice
stick
stock
*spice stock
may pod*/
