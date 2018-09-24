#include<cstdio>
#include<cmath>
#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>

using namespace std;

void call();

vector<int>res;
int ans[500];
int con;
int sum,take,k=0;
int maxi,n,taken[50],ar[50];
int main()
{
    while(scanf("%d %d",&maxi,&n)==2)
    {
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            taken[i]=0;

        }
        sum=0,take=0,k=0;
        res.push_back(0);
        call();
        for(int i=0; i<con; i++)
        {
            //if(ans[i]==0)
            //continue;
            if(i==con-1)
                printf("%d",ans[i]);
            else
                printf("%d ",ans[i]);
            //printf("1 4 sum:5",ans[i]);}
        }
        printf(" sum:%d\n",sum);

        res.clear();
//ans.clear();
    }
    return 0;
}

void call()
{
    if(take>sum)
    {
        con=0;
        //ans.clear();
        int sz=res.size();
        for(int i=0; i<sz; i++)
        {
            if(res[i]==0)
                continue;
            ans[con++]=res[i];
        }
        sum=take;
        if(sum==maxi)
        {
            k=1;
            return;
        }
        //return;
    }
    for(int i=0; i<n; i++)
    {
        if(taken[i]==0)
        {
            int  num=0;
            for(int j=0; j<res.size(); j++)
                num=num+res[j];
            num=num+ar[i];
            if(num<=maxi)
            {
                taken[i]=1;
                take=num;
                res.push_back(ar[i]);
                call();
                taken[i]=0;
                res.pop_back();
                if(k==1)
                    return;
            }

        }

    }

}
