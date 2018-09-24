#include<cstdio>
#include<cmath>
#include<cstring>
#define size 100005
using namespace std;
int arr[size];
void seive()
{

    int i,j,root;
    for(i=2;i<size;i++)
        arr[i]=1;

    root=sqrt(size);
    for(i=2;i<=root;i++)
    {
        if(arr[i]==1)
        {

            for(j=2;i*j<=size;j++)
                arr[i*j]=0;
        }

    }


}
int main()
{
    seive();
    int piece,flag=0,two=0,ans[100005],ind=0;

    scanf("%d",&piece);
    for(int i=2;i<=piece+1;i++)
    {
        if(arr[i])
          ans[ind++]=1;
        else
          {ans[ind++]=2;
             two=1;
          }
    }
    if(two)
     printf("2\n");
     else
       printf("1\n");
    for(int i=0;i<ind;i++)
    {
        if(!flag)
        {
            printf("%d",ans[i]);
            flag=1;
        }
        else
          printf(" %d",ans[i]);

    }
    printf("\n");
    return 0;
}
