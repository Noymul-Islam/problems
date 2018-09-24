#include<cstdio>
#include<iostream>
#include<vector>

using namespace std;
void call(int i,int sum);

int maxi,n,tot;
int ar[50],taken[50];
vector<int>res,ans;
int main()
{
    while(scanf("%d %d",&maxi,&n)==2)
    {
        for(int i=0;i<n;i++)
              cin>>ar[i];
        tot=0;
        call(0,0);
        //printf("")
        for(int i=0;i<ans.size();i++)
        {
            if(i==ans.size()-1)
                  printf("%d",ans[i]);
            else
                printf("%d ",ans[i]);

        }
        printf(" sum:%d\n",tot);
        res.clear();
        ans.clear();
    }

    return 0;
}

void call(int i,int sum)
{
    if(i==n)
    {
        if(sum>tot&&sum<=maxi)
        {
            tot=sum;
            ans=res;

        }
        return;
    }
    res.push_back(ar[i]);
    call(i+1,sum+ar[i]);
    res.pop_back();
    call(i+1,sum);

}
