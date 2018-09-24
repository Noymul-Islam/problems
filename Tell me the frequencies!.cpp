#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>
using namespace std;
 int p,k,f;
struct data
{

    char ch;
     int num;
}a[500];

int comp(const data &p, const data &q)
{
    if(p.num==q.num)
    return(p.ch>q.ch);

    else
     return(p.num<q.num);


}

int main()
{
    char line[1200];
    f = 1;
    while (gets(line))
    {
        if(f==0)
        printf("\n");
        f = 0;
        for(int i=0;i<500;i++)
           a[i].num=0;
 int p=0;
         k=strlen(line);

        for( int i=0;i<k;i++)
        {
            //printf("1\n");
            char c=line[i];
            int tot=line[i]-32;

            a[tot].num++;
            a[tot].ch=c;


        }
        //printf("1\n");

        sort(a,a+500,comp);
        //printf("1\n");
        for(int i=0;i<500;i++)
        {
           // printf("1\n");

            if(a[i].num==0)
                 continue;
              else
            {//printf("1\n");
              printf("%d %d\n",a[i].ch,a[i].num);
           // p++;
        }
        if(p==k)
          break;
        }
    }

    return 0;
}
