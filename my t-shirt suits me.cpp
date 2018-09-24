#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,ar[6];
         memset(ar,0,sizeof(ar));
        scanf("%d %d",&n,&m);
        char ch1[25],ch2[25];
        for(int i=0;i<m;i++)
        {
            scanf("%s %s",ch1,ch2);
            if(strcmp(ch1,"XS")==N0||strcmp(ch2,"XS")==0)
                 ar[0]++;
            if(strcmp(ch1,"S")==0||strcmp(ch2,"S")==0)
                 ar[1]++;
            if(strcmp(ch1,"M")==0||strcmp(ch2,"M")==0)
                 ar[2]++;
            if(strcmp(ch1,"L")==0||strcmp(ch2,"L")==0)
                 ar[3]++;
            if(strcmp(ch1,"XL")==0||strcmp(ch2,"XL")==0)
                 ar[4]++;
            if(strcmp(ch1,"XXL")==0||strcmp(ch2,"XXL")==0)
                 ar[5]++;


        }
         sort(ar,ar+6);
         if((ar[4]==ar[5])&&(ar[4]+ar[5]>=m))
            printf("YES\n");
             else
                 printf("NO\n");
    }
    return 0;
}
