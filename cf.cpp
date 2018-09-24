#include<iostream>
#include<cstdio>
using namespace std;
int main()
{

//freopen("in.txt","w",stdout) ;
 int n,k
    ;
    scanf("%d %d",&n,&k);
//    n=1000;
//    k=499;

    if(k>(n-1)/2)
        printf("-1\n");
    else
    {
        printf("%d\n",n*k);
        for(int i=0;i<n;i++)
            for(int j=i+1;j<i+1+k;j++)
        {
            printf("%d %d\n",i+1,j%n+1);
        }
    }
return 0;
}
