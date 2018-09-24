#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;
#define size 1000020
char ch[size];
void seive()
{
    memset(ch,'1',sizeof(ch));
    int root=sqrt(size);
    ch[1]='0';
    ch[0]='0';
    //ch[2]='1';
    for(int i=2;i<=root;i++)
    {
        if(ch[i]=='1')
        {for(int j=2;i*j<=size;j++)
              ch[i*j]='0';
        }

    }




}

int main()
{
    seive();
    char ar[100];
    while(gets(ar))
    {
        char ar2[100];
         int p=0;
        int n=atoi(ar);
        if(ch[n]=='1')
        {
            int len=strlen(ar);
            for(int i=len-1;i>=0;i--)
              ar2[p++]=ar[i];
              ar2[p]='\0';
              if(strcmp(ar,ar2)==0)
              {

                printf("%d\n",n*2);
              break;}
              else
                printf("%d\n",n*2);


        }
        else
            printf("%d\n",n*2);



    }

    return 0;
}
