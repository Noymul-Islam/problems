#include<cstdio>
#include<iostream>
#include<vector>
#include<queue>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<set>
#include<stack>
using namespace std;

#define inf 99999999
#define pi acos(0)
#define pf printf()
#define sc scanf()


struct edge
{


     char ch2[105];
      int w;

};
vector<edge>e;
bool comp (edge p, edge q)
{

    return p.w<q.w;
}
//void seive()

//{


//}
int main()
{
  int t, cases=1;
  scanf("%d",&t);
  getchar();
  getchar();
  for(int x=1;x<=t;x++)
  {


  int n,m;
   scanf("%d %d",&n,&m);
    getchar();
   char ch[105][105];
    char ch1[105][105];
   for(int i=0;i<m;i++)
   {
       gets(ch[i]);

   }
   int count =0;
   for(int i=0;i<m;i++)
   {

       for(int j=0;j<n-1;j++)
       {
           for(int k=j+1;k<n;k++)
           {if(ch[i][j]>ch[i][k])
             {//swap(ch[i][j],ch[i],k);
             count++;}
           }

       }
        edge data;
        data.w=count;
         strcpy(data.ch2,ch[i]);
         e.push_back(data);
         //printf("%d\n",count);
          count=0;


   }
     stable_sort(e.begin(),e.end(),comp);
    for(int i=0;i<(int)e.size();i++)
      printf("%s\n",e[i].ch2);
      if(x!=t)
       printf("\n");
       e.clear();
  }
   return 0;

}
