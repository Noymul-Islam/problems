#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
using namespace std;;
#define size 10000000
char arra[size];

void seive();

int main()
{
    int a,b,c;
    seive();

    while(scanf("%d",&a)==1)
    {
        if(a==0)
             break;

        if(arra[a]=='1')
             printf("YES its a prime\n");
        else

        printf("Sorry its not a prime\n");


    }
    return 0;
}

void seive()
{

    int i,j,m,n,root;
    memset(arra,'1',sizeof(arra));
    arra[0]='0';
    arra[1]='0';
    root=sqrt(size);
    for(i=2;i<=root;i++)
    {
        if(arra[i]=='1')
        for(j=2;j*i<=size;j++)
            arra[i*j]='0';
    }


}
