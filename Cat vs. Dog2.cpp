#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

struct data{
string like,like2;

}input[510];
int bp[510][510];
int n;
bool bpm(int u);
int max_bpm();
bool comp(data p, data q)
{
    if(p.like==q.like)
          return p.like2<q.like2;
    return p.like<q.like;

}
  int c,d;
  int seen[510],match[510];
  bool bpm(int u)
  {
      for(int v=0;v<n;v++)
      {
          if(bp[u][v]&&!seen[v])
          {

              seen[v]=1;
              if(match[v]<0||bpm(match[v]))
              {
                  match[v]=u;
                  return true;
              }
          }

      }
       return false;
  }
  int max_bpm()
  {
      memset(match,-1,sizeof(match));
        int res=0;
      for(int u=0;u<n;u++)
      {
          memset(seen,0,sizeof(seen));
          if(bpm(u))
             res++;

      }
      return res;
  }
int main()
{ int t,cs=1;
cin>>t;
while(t--)
{
    cin>>c>>d>>n;
     //getchar();
       memset(bp,0,sizeof(bp));
    for(int i=0;i<n;i++)
    {
        //scanf("%s %s",like[i],like2[i]);
    cin>>input[i].like>>input[i].like2;
    }
    sort(input,input+n,comp);
    for(int i=0;i<n;i++)
         for(int j=i+1;j<n;j++)
     {
         if(input[i].like==input[j].like2||input[i].like==input[j].like2)
         {
            // printf("-->Ok\n");
            // printf("i-->%d j-->%d\n",i,j);
             bp[i][j]=1;
             //bp[j][i]=1;

         }


    }

    int ans=max_bpm();
//    cout<<ans<<endl;
    printf("%d\n",n-ans);

}

    return 0;
}

