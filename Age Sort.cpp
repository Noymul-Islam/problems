#include<cstdio>
#include<stdlib.h>
#include<cmath>

using namespace std;

int comp(const void *i, const void *j);
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        int i,j,k[n];
        for(i=0;i<n;i++)
             scanf("%d",&k[i]);

        qsort(k,n,sizeof(int),comp);

        for(i=0;i<n;i++)
        {
            if(i!=n-1)
            printf("%d ",k[i]);
            else
                 printf("%d\n",k[i]);
    }



}
return 0;
}

int comp(const void *i, const void *j)
{
    return *(int*)i-*(int*)j;

}
