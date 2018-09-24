#include<cstdio>
#include<cstring>

using namespace std;


int main()
{
    int n,m,c,cases=1;
    while(scanf("%d %d %d",&n,&m,&c)==3)
    {
        int arr[1500];
int color[1510];
        memset(color,0,sizeof(color));
        memset(arr,0,sizeof(arr));
        int sum=0,mx=0,d=0;
        if(n==0&&m==0&&c==0)
        {
            //printf("\n");
            break;
        }
        for(int i=1; i<=n; i++)
        {
            int k;
            scanf("%d",&k);
            arr[i]=k;


        }
        //for(int i=1;i<=n;i++)
        //printf("%d\n",arr[i][0]);
        for(int i=1; i<=m; i++)
        {
            int op;
            scanf("%d",&op);
            if(color[op]==0)
            {
                color[op]=1;
                sum=sum+arr[op];

            }

            else if(color[op]==1)
            {
                color[op]=0;
                sum=sum-arr[op];

            }


            if(sum>mx)
            {
                mx=sum;
            }



                //printf("Sequence %d\nFuse was blown.\n",cases++);



        }



        if(mx<=c)
            printf("Sequence %d\nFuse was not blown.\nMaximal power consumption was %d amperes.\n\n",cases++,mx);
        else
            printf("Sequence %d\nFuse was blown.\n\n",cases++);


       // printf("\n");
    }
    return 0;
}
