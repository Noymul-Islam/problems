#include<cstdio>
#include<cmath>
#include<cstring>

using namespace std;

 char txt[1000010],pat[1000010];
  int par[1000010];
  int kmp()
  {
      int n=strlen(txt);
       int len=strlen(pat);
       int ans=0,k=0;
       for(int i=0;i<n;i++)
       {
         while(k>0&&txt[i]!=pat[k])
                   k=par[k-1];
         if(txt[i]==pat[k])
              k++;
         //par[i]=k;
         if(k==len)
         {

             ans++;

               //break;
         }


       }


      return ans;
  }
 void pre_process()
 {
     int n,k,i;
     n=strlen(pat);
     k=0;
      par[0]=0;
      for(int i=1;i<=n;i++)
      {

          while(k>0&&pat[i]!=pat[k])
          {
              k=par[k-1];
          }
          if(pat[i]==pat[k])
          {

              k++;
          }
          par[i]=k;
      }


 }
int main()
{

    int t,cs=1;
    scanf("%d",&t);
     getchar();

while(t--)
{
    gets(txt);
    gets(pat);

    pre_process();
    int res=kmp();
     printf("Case %d: %d\n",cs++,res);

}
    return 0;
}
