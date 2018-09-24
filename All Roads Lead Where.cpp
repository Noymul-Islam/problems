#include<cstdio>
#include<cstring>
#include<cmath>
#include<map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<queue>
using namespace std;

void bfs( int source, int dest);
vector<int>G[100];
char  par[100];
//int taken[100];
void recursion(int dest);
int main()
{
   // freopen("input.txt","r",stdin);
    int test;
    scanf("%d",&test);
    getchar();
    getchar();
    while(test--)
    {
        map<string,int>mp;
        int road, que;
        scanf("%d %d",&road,&que);
        int num=1;
        //mp["Rome"]=0;
        for(int i=1; i<=road; i++)
        {
            char s1[100],s2[100];
            //cin>>s1>>s2;
            scanf("%s %s",s1,s2);
            //par[s2[0]-65]=s1-65;

            //if(s1[]=="Rome"&&(mp.find(s1)==mp.end()))
            //mp[s1]=s1[0]-65;
            //else if(s2[]=="Rome"&&(mp.find(s2)==mp.end()))
            //      mp[s2]=0;

            if(mp.find(s1)==mp.end())
            {
                mp[s1]=s1[0]-65;

            }
            if(mp.find(s2)==mp.end())
            {
                mp[s2]=s2[0]-65;

            }

            G[mp[s1]].push_back(mp[s2]);
            G[mp[s2]].push_back(mp[s1]);

        }

        for(int i=1; i<=que; i++)
        {
            memset(par,0,sizeof(par));
            char ch1[100],ch2[100];
            //c/in>>s1>>s2;
            scanf("%s %s",ch1,ch2);
            //par[ch1[0]-65]=ch1-65;
            bfs(mp[ch1],mp[ch2]);



        }

        if(test)
            printf("\n");
            mp.clear();

        for(int k=0;k<100;k++)
            G[k].clear();

    }





    return 0;
}

void bfs(int source , int dest)
{
    int c=0;
    queue<int>Q;
    Q.push(source);
    int  taken[100]= {0};
    taken[source]=1;
    par[source]=source;
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        for(int i=0; i<G[u].size(); i++)
        {
            int v=G[u][i];
            if(!taken[v])
            {
                taken[v]=1;
                Q.push(v);

                if(v==dest)
                {
                    par[v]=u;
                    c++;
                    break;
                }

                par[v]=u;
            }
        }
        if(c>0)
            break;
    }
    recursion(dest);
    printf("%c\n",dest+65);

}
void recursion(int dest)
{

    if(par[dest]==dest)
    {
        //printf("%c",dest+65);
        return ;
    }
    else
    {
        recursion(par[dest]);
        printf("%c",par[dest]+65);

    }
}
