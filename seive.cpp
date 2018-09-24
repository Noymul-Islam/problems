#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
#define SIZE 100000
char select[SIZE];
void sieve();
int main()
{
    sieve();
    return 0;
}
void sieve()
{
    int i,j;
    memset(select,'1',sizeof(select));
    select[0]=select[1]='0';
    //select[2]='1';
    for(i=4;i<SIZE;i+=2)
        select[i]='0';
        cout<<"1\n";
    for(i=3;i<SIZE;i+=2)
    {
        if(select[i]=='1')
        {
            for(j=i*i;j<SIZE;j+=(i*2))
                select[j]='0';
        }
        cout<<"2\n";
    }
    int k=0;
    for(i=2;i<SIZE;++i)
    {
        if(select[i]=='1')
        {
            printf("%d\n",i);
            ++k;
        }
    }
    printf("\n\n%d\n",k);
    return;
}

