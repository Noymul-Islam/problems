#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

#define ll  long long
struct data
{
    int a,b,c;
};
int main()
{
   int n;
  cin>>n;
    int ar[n];
    int ar1[3];
    memset(ar1,0,sizeof(ar1));
    for(int i=0;i<n;i++)
    {cin>>ar[i];
    if(ar[i]==1)
        ar1[0]++;
    else if(ar[i]==2)
           ar1[1]++;
    else
         ar1[2]++;
    }
    sort(ar1,ar1+3);
     int w=ar1[0];
    data num[w];
     int p=0;
    for(int i=0;i<n;i++)
    {

        if(ar[i]==1)
        {
            ar[i]=-1;
            int d=0;
            //num[p]=i+1;
            for(int j=0;j<n;j++)
            {
                if(ar[j]==2)
                {
                    ar[j]=-1;

                    for(int k=0;k<n;k++)
                    {

                        if(ar[k]==3)
                        {
                            ar[k]=-1;
                            num[p].a=i+1;
                            num[p].b=j+1;
                            num[p++].c=k+1;
                            d++;

                        }
                        if(d!=0)
                             break;
                    }
                    if(d!=0)
                          break;
                }

            }
        }

    }
    printf("%d\n",w);
    for(int i=0;i<w;i++)
    {
        printf("%d %d %d\n",num[i].a,num[i].b,num[i].c);

    }

    return 0;
}
