#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
using namespace std;

int main()
{
    int n,m;
    while((scanf("%d %d",&n,&m)==2))
    {
        if(n==0&&m==0)
             break;
        int jack[n+1];
        int jill[m+1];
        for(int i=1;i<=n;i++)
             cin>>jack[i];
        for(int i=1;i<=m;i++)
              cin>>jill[i];
        int count =0;
        for(int i=1;i<=n;i++)
        {
            int beg=1,last=m;
            int mid=(beg+last)/2;
            while(beg<=last)
            {
                if(jack[i]<jill[mid])
                {
                    last=mid-1;
                    mid=(last+beg)/2;


                }
                else if(jack[i]>jill[mid])
                {
                    beg=mid+1;
                    mid=(beg+last)/2;

                }
                if(jack[i]==jill[mid])
                {
                    count++;
                    break;

                }

            }


        }

        cout<<count<<endl;
    }
    return 0;
}
