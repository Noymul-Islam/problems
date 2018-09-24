#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    //printf("%d",(-100%4));
    int n,m;
    while(scanf("%d %d",&n,&m)==2)
    {
        if(n==0&&m==0)
        {
            printf("0 0\n");
            break;

        }
        int ar[n],ar1[n];
        for(int i=0; i<n; i++)
        {

            cin>>ar[i];



            ar1[i]=ar[i]%m;

        }
        //for(int i=0;i<n;i++)
          //   printf("-->%d\n",ar1[i]);
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(ar1[i]>ar1[j])
                {
                    swap(ar[i],ar[j]);
                    swap(ar1[i],ar1[j]);
                 }
                else if(ar1[i]==ar1[j])
                {
                    if(ar[i]%2!=0&&ar[j]%2!=0)
                    {
                        if(ar[i]<ar[j])
                        {
                          swap(ar[i],ar[j]);
                            swap(ar1[i],ar1[j]);

                        }

                    }
                    else if(ar[i]%2==0&&ar[j]%2==0)
                    {
                        if(ar[i]>ar[j])
                        {
                           swap(ar[i],ar[j]);
                           swap(ar1[i],ar1[j]);
                        }

                    }
                    else
                    {
                        if(ar[j]%2!=0)
                        {

                          swap(ar[i],ar[j]);
                          swap(ar1[i],ar1[j]);
                        }

                    }

                }

            }

        }
        printf("%d %d\n",n,m);
        for(int i=0; i<n; i++)
            printf("%d\n",ar[i]);

    }

    return 0;
}
