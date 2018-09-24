#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

vector<int>v1,v2,res,G[5001];


int main()
{
    int n;
    G[0].push_back(0);
    G[1].push_back(1);
    int p=2;
    //while(scanf("%d",&n)==1)

        //res.push_back(0);
v1.push_back(0);
v2.push_back(1);
int sum=0;
        for(int i=2;i<5001;i++)
        {

            int len=v1.size();
            int len1=v2.size();
            //if(len1>len)
                int k;
                int m=len-1;
            for(int j=len1-1;j>=0;j--)
            {
                if(m>=0)
                {
                    sum=sum+v1[m]+v2[j];
                   // printf("->%d\n",sum);
                    m--;

                }
                else
                sum=sum+v2[j];
                int mod=sum%10;
                res.push_back(mod);
                sum=sum/10;

            }
            if(sum>0)
            {
                res.push_back(sum);
                sum=sum/10;
            }
            reverse(res.begin(),res.end());
            //    int k=len1-len;
            if(i<5001)
                {v1.clear();
                v1=v2;
                v2.clear();
                v2=res;
                G[p++]=res;
                 res.clear();}

        }
        //for(int i=0;i<res.size();i++)
          //  printf("%d",res[i]);
        //printf("\n");
        //res.clear();
        //v1.clear();
        //v2.clear();
        while(scanf("%d",&n)==1)
        {    printf("The Fibonacci number for %d is ",n);
            for(int i=0;i<G[n].size();i++)
         printf("%d",G[n][i]);
         printf("\n");
            //printf("%d\n",)
        }
    return 0;
}
