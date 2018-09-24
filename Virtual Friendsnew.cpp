#include<cstdio>
#include<cstring>
#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int Union(int a , int b);
int find(int r);
int parent[200000];
int dist[200000],m,x,y;
int main()
{
//freopen("cat.txt","w",stdout);
    int t,p;
    scanf("%d",&t);
    while(t--)
    {
        //memset(parent,0,sizeof(parent));

        int mark=1;
        for(int i=0; i<200000; i++)
            {dist[i]=1;
             parent[i]=i;
            }
        map<string,int>mp;
        int frnd;
        scanf("%d",&frnd);
        for(int i=0; i<frnd; i++)
        {
            string s1, s2;
            cin>>s1>>s2;
            if(mp.find(s1)==mp.end())
            {
                mp[s1]=mark++;
               // parent[mark]=mark++;

            }
            if(mp.find(s2)==mp.end())
            {
                mp[s2]=mark++;
                //parent[mark]=mark++;

            }
            int u=mp[s1];
            int v=mp[s2];



         p=Union(u,v);

                 printf("%d\n",p);

        }

        mp.clear();


    }

    return 0;
}
int  Union( int a, int b)
{



       x=find(a);
       y=find(b);
       if(x!=y)
      {

       parent[y]=x;
      dist[x]+=dist[y];
      //dist[y]=dist[x];
      }


return dist[x];
}
int find(int r)
{
    if(parent[r]==r)
        return r;
    else
        return (parent[r]=find(parent[r]));


}

