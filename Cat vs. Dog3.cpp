#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

//string like[510],like2[510];
int bp[510][510];
int n;
struct dog{
   string like, like2;
}dog_lover[501];
struct cat{
 string like,like2;
}cat_lover[501];
int for_dog,for_cat;
bool bpm(int u);
int max_bpm();
  int c,d;
  int seen[510],match[510];
  bool bpm(int u)
  {
      for(int v=0;v<=for_cat;v++)
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
      for(int u=0;u<=for_dog;u++)
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
    for_cat=-1,for_dog=-1;
     //getchar();
       memset(bp,0,sizeof(bp));
       string s1,s2;
    for(int i=0;i<n;i++)
    {
        //scanf("%s %s",like[i],like2[i]);
    cin>>s1>>s2;
    if(s1[0]=='D')
    {
       // printf("ok");
        for_dog++;
        dog_lover[for_dog].like=s1;
        dog_lover[for_dog].like2=s2;


    }
    else
    {
     // printf("OK");
        for_cat++;
        cat_lover[for_cat].like=s1;
        cat_lover[for_cat].like2=s2;

    }
    }
    for(int i=0;i<=for_dog;i++)
        for(int j=0;j<=for_cat;j++)
    {
        if(dog_lover[i].like==cat_lover[j].like2||dog_lover[i].like2==cat_lover[j].like)
        {

            bp[i][j]=1;
        }


    }

    /*for(int i=0;i<n;i++)
         for(int j=0;j<n;j++)
     {
         if(like[i]==like2[j]||like[j]==like2[i])
         {
            // printf("-->Ok\n");
         //    printf("i-->%d j-->%d\n",i,j);
             bp[i][j]=1;
             //bp[j][i]=1;

         }


    }*/

    int ans=max_bpm();
   // cout<<ans<<endl;
    printf("%d\n",n-ans);

}

    return 0;
}

