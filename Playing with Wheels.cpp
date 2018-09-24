#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
#include<queue>
using namespace std;

void bfs(int start, int dest);

int make_num(int a,int b, int c, int d)
{
    return ((a*1000)+(b*100)+(c*10)+d);
}
 queue<int>q;
int forbid[10100];
int taken[10100];
int cost[10100];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(forbid,0,sizeof(forbid));
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int start=make_num(a,b,c,d);
        cin>>a>>b>>c>>d;
        int dest=make_num(a,b,c,d);
       // cout<<start<<" "<<dest<<endl;
        int n;
        cin>>n;
        while(n--)
        {
            cin>>a>>b>>c>>d;
            int num=make_num(a,b,c,d);
            //cout<<num<<endl;
            forbid[num]=1;

        }
        bfs(start,dest);

        printf("%d\n",cost[dest]);
    }

    return 0;
}

void bfs(int start ,int dest)
{
    memset(taken,0,sizeof(taken));
    memset(cost,-1,sizeof(cost));
    //queue<int>q;
while(!q.empty())
    q.pop();
    taken[start]=1;
    cost[start]=0;
    q.push(start);

    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        int dg1,dg2,dg3,dg4;
        int v,w;
        dg4=u%10;
        dg3=(u%100)/10;
        dg2=(u/100)%10;
        dg1=(u)/1000;
       // printf("%d %d %d %d\n",dg1,dg2,dg3,dg4);
        //break;
        if(!dg1)
        {
            v=make_num(1,dg2,dg3,dg4);
            w=make_num(9,dg2,dg3,dg4);

        }
        else if(dg1==9)
        {
            v=make_num(0,dg2,dg3,dg4);
            w=make_num(8,dg2,dg3,dg4);

        }
        else
        {
            v=make_num(dg1+1,dg2,dg3,dg4);
            w=make_num(dg1-1,dg2,dg3,dg4);

        }

        if(!taken[v]&&!forbid[v])
        {
            cost[v]=cost[u]+1;
            taken[v]=1;
            q.push(v);
            if(v==dest)
                return;

        }
        if(!taken[w]&&!forbid[w])
        {
            cost[w]=cost[u]+1;
            taken[w]=1;
            q.push(w);
            if(w==dest)
                return;

        }

        if(!dg2)
        {
            v=make_num(dg1,1,dg3,dg4);
            w=make_num(dg1,9,dg3,dg4);

        }
        else if(dg2==9)
        {
            v=make_num(dg1,0,dg3,dg4);
            w=make_num(dg1,8,dg3,dg4);

        }
        else
        {
            v=make_num(dg1,dg2+1,dg3,dg4);
            w=make_num(dg1,dg2-1,dg3,dg4);

        }

        if(!taken[v]&&!forbid[v])
        {
            cost[v]=cost[u]+1;
            taken[v]=1;
            q.push(v);
            if(v==dest)
                return;

        }
        if(!taken[w]&&!forbid[w])
        {
            cost[w]=cost[u]+1;
            taken[w]=1;
            q.push(w);
            if(w==dest)
                return;

        }

        if(!dg3)
        {
            v=make_num(dg1,dg2,1,dg4);
            w=make_num(dg1,dg2,9,dg4);

        }
        else if(dg3==9)
        {
            v=make_num(dg1,dg2,0,dg4);
            w=make_num(dg1,dg2,8,dg4);

        }
        else
        {
            v=make_num(dg1,dg2,dg3+1,dg4);
            w=make_num(dg1,dg2,dg3-1,dg4);

        }

        if(!taken[v]&&!forbid[v])
        {
            cost[v]=cost[u]+1;
            taken[v]=1;
            q.push(v);
            if(v==dest)
                return;

        }
        if(!taken[w]&&!forbid[w])
        {
            cost[w]=cost[u]+1;
            taken[w]=1;
            q.push(w);
            if(w==dest)
                return;

        }

        if(!dg4)
        {
            v=make_num(dg1,dg2,dg3,1);
            w=make_num(dg1,dg2,dg3,9);

        }
        else if(dg4==9)
        {
            v=make_num(dg1,dg2,dg3,0);
            w=make_num(dg1,dg2,dg3,8);

        }
        else
        {
            v=make_num(dg1,dg2,dg3,dg4+1);
            w=make_num(dg1,dg2,dg3,dg4-1);

        }

        if(!taken[v]&&!forbid[v])
        {
            cost[v]=cost[u]+1;
            taken[v]=1;
            q.push(v);
            if(v==dest)
                return;

        }
        if(!taken[w]&&!forbid[w])
        {
            cost[w]=cost[u]+1;
            taken[w]=1;
            q.push(w);
            if(w==dest)
                return;

        }




    }

    return ;
}

