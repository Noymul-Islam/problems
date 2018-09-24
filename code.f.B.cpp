#include<cstdio>
#include<cmath>

using namespace std;

int main()
{


    int n,t,c;

    scanf("%d %d %d",&n,&t,&c);
    int a[n];

    for(int i=0;i<n;i++)
          scanf("%d",&a[i]);

int way=0;
for(int i=0;i<n-c+1;i++)
{
    int k=0,sum=0,m=0;
     int j=i;

    while(k!=c)
    {
        if(a[j++]<=t)
              m++;
         k++;
         if(a[j++]>t)
         {
             i=k;
               break;
         }


    }
        if(m==c)
               way++;


}

printf("%d\n",way);


return 0;
}
