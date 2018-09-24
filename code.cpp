#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main()
{
    char ch[200000];
     int a[4];
      int sum=0;
     for(int i=0;i<4;i++)
          scanf("%d",&a[i]);
     scanf(" %[^\n]",ch);
     int n=strlen(ch);
     for(int i=0;i<n;i++)
     {
        int p=ch[i]-'0';
        sum=sum+a[p-1];


     }

     printf("%d\n",sum);

     return 0;



}
