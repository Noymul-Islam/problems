#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

void call(int i,int sum);
int c;
int t,n,k;
int ar[5000],ar1[5000];
vector<int>res,ans,v1[100],v2;
bool comp(int p, int q)
{
    return p>q;
}
int p,tr;
int main()
{
    while(scanf("%d %d",&t,&n)==2)
    {
        if(n==0)
            break;
        c=0,p=0;
        for(int i=0; i<n; i++)
            cin>>ar1[i];
        int num=0,tr=0;
        printf("Sums of %d:\n",t);
        if(t==0)
        {
            for(int i=0; i<n; i++)
            {

                if(ar1[i]==0)
                {
                    printf("0\n");
                    num++;
                    break;
                }
            }
            if(num==0)
                printf("NONE\n");
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(ar1[i]==0)
                    continue;
                ar[p++]=ar1[i];

            }
            if(p==0)
            {
                printf("NONE\n");
                continue;
            }
            k=0;
            sort(ar,ar+p,comp);


            call(0,0);

            if(c==0)
                printf("NONE\n");
            res.clear();
            ans.clear();
            for(int i=0;i<tr;i++)
            v1[i].clear();
        }
    }

    return 0;
}

void call(int i, int sum)
{
    if(i==p)
    {
        if(sum==t)
        {

            ans=res;
           // sort(ans.begin(),ans.end(),comp);
           for(int z=0;z<tr;z++)
           {
               if(ans==v1[z])
                  return;
           }
            //if(k==1)
            //{
              //  if(ans==v1)
                //    return;
            //}

            for(int j=0; j<ans.size(); j++)
            {
                if(j==0)
                    printf("%d",ans[j]);
                else
                {

                    printf("+%d",ans[j]);
                }

                c++;
                if(j==ans.size()-1)
                    printf("\n");
            }
            //printf("\n");
            k=1;
            v1[tr++]=ans;
            ans.clear();
        }
        return;
    }

    res.push_back(ar[i]);
    call(i+1,sum+ar[i]);
    res.pop_back();

    call(i+1,sum);
    //printf("55");
    return;
}
