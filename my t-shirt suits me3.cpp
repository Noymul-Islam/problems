#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<vector>
#include<queue>
#include<algorithm>
#include<map>
using namespace std;

int bp[35][35];
bool bpm(int u);
int max_bpm();
int n,m;
int shirt[6];
int volunteer[40];
int num=0;
 int match[50][6],seen[50];
map<string,int>mp;

int main()
{
    int coun=0;
    mp["XXL"]=coun++;
    mp["XL"]=coun++;
    mp["L"]=coun++;
    mp["M"]=coun++;
    mp["S"]=coun++;
    mp["XS"]=coun++;

//char ch[5]="XL";
// printf("%d\n",mp[ch]);
  int t;
  cin>>t;
  while(t--)
  {
        char ch1[10],ch2[10];
        memset(bp,0,sizeof(bp));
      scanf("%d %d",&n,&m);
      num=n/6;
      for(int i=0;i<m;i++)
      {
          scanf("%s %s",ch1,ch2);
          bp[i][mp[ch1]]=1;
          bp[i][mp[ch2]]=1;


      }
      int res=max_bpm();
      //printf("%d\n",res);
       //int tot=n/6;
       if(res==m)
         printf("YES\n");
       else
        printf("NO\n");



  }
  return 0;
}
int max_bpm()
{
    memset(match,-1,sizeof(match));
     int res=0;
    for( int u=0;u<m;u++)
    {
        memset(seen,0,sizeof(seen));

        if(bpm(u))
             res++;
    }
    return res;
}
bool bpm(int u)
{
    for(int v=0;v<6;v++)
    {
        if(!seen[v]&&bp[u][v])
         {
            seen[v]=1;

            for(int i=0;i<num;i++)
            {
                if(match[v][i]<0||bpm(match[v][i]))
                {

                    match[v][i]=u;
                    return true;
                }
            //    else if(match[v][i])
              //  {
                //    match[v][i]=u;
                  //  return true;

                //}




            }

            /*if(match[v]<0||bpm(match[v]))
            {
                match[v]=u;
                return true;

            }*/
        }

    }

    return false;
}

