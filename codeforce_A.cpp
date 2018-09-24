#include<cstdio>
#include<iostream>

using namespace std;

int main()

{
    int n,d;
    scanf("%d %d",&n,&d);
    int ar[n];

    for(int i=0;i<n;i++)
          scanf("%d",&ar[i]);
    int num=10,number=0;
    int ans=0,c=0,count=0,k=0;
    for(int i=0;i<n;i++)
    {
        ans=ans+ar[i];

           if(ans>d)
           {
               c++;
               break;
           }
           if(i!=n-1)
           {ans=ans+num;
            count++;}


    }
    count=(count*10)/5;
     if(d>ans)
     {
         k=(d-ans)/5;
     }
     number=count+k;
    if(c!=0)
         printf("-1\n");
    else
          printf("%d\n",number);

    return 0;
}
