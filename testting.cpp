#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int seen[110],match[110];
bool bpm( int u);
int max_bpm();
int n,m;
int A[110],B[110],bp[110][110];
bool bpm(int u)
{
    for(int v=0;v<m;v++)
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
{
     int t;
      int cs=1;
      cin>>t;
      while(t--)
      {
          memset(bp,0,sizeof(bp));
           cin>>n;
  int tot=0;
           for(int i=0;i<n;i++)
              cin>>A[i];
           cin>>m;
           for(int j=0;j<m;j++)
           cin>>B[j];

           for(int i=0;i<n;i++)
            {   //if(A[i]==0)
               //continue;
                for(int j=0;j<m;j++)
           {
               // if(A[i]==0&&B[j]==0)
                 //     {tot++;
                       //A[i]=-1,B[j]=-1;}
                      //printf("%d",tot);}
                //else if(A[i]==0||B[j]==0)
                  //    {   //printf("%d",tot);
                    //      continue;
                      //}

                  //if(A[i]==0)
                  if(A[i]==0&&B[j]>0)
                        continue;
               else if((B[j]==0&&A[i]==0)||(B[j]==0&&A[i]!=0))
                  {

 //printf("ok");
                      bp[i][j]=1;
                  }
                  else if (B[j]%A[i]==0&&(B[j]>0&&A[i]>0))
                  {
                      bp[i][j]=1;
                  }

           }}

           printf("Case %d: %d\n",cs++,max_bpm()+tot);



      }
    return 0;
}
