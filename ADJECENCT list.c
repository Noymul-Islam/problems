#include<stdio.h>
#include <vector>
#include<cstring>
#include<iostream>
using namespace std;

int main()
{

    int i,j,m,n,e,x,y,size;

    vector<int>v[100];

    scanf("%d %d",&n,&e);

    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);
        v[x].push_back(y);
        v[y].push_back(x);



    }
    for(i=1;i<=n;i++)
    {
        size=v.size(i);
        for(j=0;j<size;j++)
            printf("%d",v[i][j]);


    }

}
