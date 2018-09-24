#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
long long int dist[100000];

int main()
{
    freopen("in.txt","w",stdout);
    dist[1]=1;
     char ch='"',ch1='"', ch2=',';
    long long p=2,c=1;
    while(1)
    {
        long long int k=p;
        while(k%2==0)
        {
            k=k/2;

        }
        while(k%3==0)
        {
            k=k/3;
        }
        while(k%5==0)
            k=k/5;
        while(k%7==0)
         k=k/7;
         if(k==1)
            dist[++c]=p;
            p++;
         if(c==5842)
            break;


    }
    for(int i=1;i<=5842;i++)
         printf("%c %d %c",ch,dist[i],ch1);
          //printf("%c\n",ch2);

}
