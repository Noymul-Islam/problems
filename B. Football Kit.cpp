#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int  counter[100010], num[100100];
    memset(counter,0,sizeof(counter));
    //for(int i=0;i<n;i++)
    // {

    //   number[i][2]=0;
    //  number[i][3]=0;
    int x;

    for(int i=1; i<=n; i++)
    {

        scanf("%d %d",&x,&num[i]);
        counter[x]++;

    }

    /*for(int i=0;i<n-1;i++)
    {

        for(int j=i+1;j<n;j++)
        {
            if(number[i][0]==number[j][1])
            {
                number[j][2]++;
                 number[i][2]++;

            }
             if(number[i][1]==number[j][0])
            {
                number[i][2]++;
                number[j][2]++;

            }

             if(number[i][0]!=numberintf("r[j][1])
            {
                number[i][2]++;
                 number[j][3]++;

            }
            if(number[i][1]!=number[j][0])
            {
                number[i][3]++;
                 number[j][2]++;

            }

        }
    }*/

    for(int i=1; i<=n; i++)
    {
        printf("%d %d\n",n-1+counter[num[i]],n-1-counter[num[i]]);
    }
    return 0;
}
