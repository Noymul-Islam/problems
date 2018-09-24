#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<cmath>

using namespace std;


int main()
{
    int n,m;
    cin>>n;
    int boy[n];
    for(int i=0;i<n;i++)
          cin>>boy[i];
          cin>>m;
           int girl[m];
    for(int j=0;j<m;j++)
          cin>>girl[j];
    sort(boy,boy+n);
    sort(girl,girl+m);
      int count =0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)

        {
         if(girl[j]>=0)

        {
            if((boy[i]-girl[j]==1)||(boy[i]-girl[j]==0)||(boy[i]-girl[j]==-1))
            {
                count++;
                boy[i]=-10;
                girl[j]=-50;
                break;
            }

        }
        }
    }
    printf("%d\n",count);
    return 0;
}
