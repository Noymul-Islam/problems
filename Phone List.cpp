#include<cstdio>
#include<iostream>
#include<cstring>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

string st[10010];
bool comp(string s, string t)
{
    return s<t;

}
/*string pat,txt;
int par[100];
void pre_process()
{
    int k,len;
    len=pat.size();
//    cout<<len<<endl;
   k=0;
    par[0]=0;
    for(int i=1; i<len; i++)
    {
        //printf("isd");
        while(k>0&&pat[i]!=pat[k])
            {k=par[k-1];
          //    printf("sfs");
            }
        if(pat[k]==pat[i])
            k++;
        par[i]=k;
        //printf("ok");

    }

    return ;
}

int kmp()
{
    //printf("56456");
    int len=pat.size();
    int len2=txt.size();
    //cout<<len<<" "<<len2<<endl;
    int ans=0;
    int k=0;
    for(int i=0; i<len2; i++)
    {

        while(k>0&&txt[i]!=pat[k])
            k=par[k-1];

        if(txt[i]==pat[k])
            k++;
        if(k==len)
        {

            return 1;

        }
    }

    return 0;
}*/
int main()
{
    int t;
    cin>>t;


    while(t--)
    {

        int num;
        scanf("%d",&num);
              getchar();
        for(int i=0; i<num; i++)
        {
            cin>>st[i];


        }

        sort(st,st+num,comp);
//        for(int i=0;i<num;i++)
  //            cout<<st[i]<<endl;
        int ans=0;
        for(int i=1; i<num; i++)
        {
             int j;
            //pat=st[i];
            int len1=st[i-1].size();
        int len2=st[i].size();
         int mini=min(len1,len2);
         for( j=0;j<mini;j++)
         {
             if(st[i-1][j]!=st[i][j])
                 break;

         }
         if(j==mini)
         {
             ans++;
              break;
         }

           // pre_process();

            /*for(int j=i+1; j<num; j++)
            {
                if(st[j].size()>st[i].size())
                {
                   // printf("sds");
                    txt=st[j];


                    ans=kmp();
                    if(ans)
                        break;
                }



            }*/
            //if(ans)
              //  break;


        }
        if(ans)
            printf("NO\n");
        else
            printf("YES\n");


    }

    return 0;
}
