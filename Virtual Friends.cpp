#include<cstdio>
#include<cstring>
#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
void Union(int a , int b);
int find(int r);
int parent[500000];

int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int mark=1;
         map<string,int>mp;
    int frnd;
    scanf("%d",&frnd);
    for(int i=0;i<frnd;i++)
    {
        string s1, s2;
  cin>>s1>>s2;
   if(mp.find(s1)==mp.end())
     {
         mp[s1]=mark;
          parent[mark]=mark++;

     }
    if(mp.find(s2)==mp.end())
    {
        mp[s2]=mark;
        parent[mark]=mark++;

    }
    int u=mp[s1];
    int v=mp[s2];
     Union(u,v);
     if(u<v)
        u=v;
     int arr[500000];
      memset(arr,0,sizeof(arr));
       //printf("%d\n",arr[1]);
      for(int i=1;i<=u;i++)
      {
          int k=find(i);
            arr[k++];
      }

      int number =0;
          int c=parent[u];
          for(int i=1;i<=u;i++)
          {
              if(parent[i]==c)
                  number++;

          }
          printf("%d\n",number);

    }
      mp.clear();

    }

    return 0;
}
void Union( int a, int b)
{

    if(find(a)!=find(b))
    {
        if((parent[a]==a)&&(parent[b]!=b))
              parent[a]=parent[b];
        else
            parent[find(b)]=parent[a];

    }
}
int find(int r)
{
    if(parent[r]==r)
          return r;
      else
        parent[r]=find(parent[r]);


}
