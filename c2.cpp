#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<cstdio>
using namespace std;

int main()
{
     char ch[1000005];
     char ch1[1000000];
     int p=1;
     scanf("%s",ch);
       getchar();
       //printf("%s\n",ch);
       int a,b,res,n=0,k=0;
       cin>>a>>b;
     int len=strlen(ch);

     for(int i=0;i<len;i++)
     {
          n=0;
         ch1[i]=ch[i];
         ch1[p++]='\0';
         //printf("%s\n",ch1);
         for(int j=0;j<p;j++)
         {
             res=n*10+ch1[j]-'\0';
             //printf("%d\n",res);
             n=res%a;

         }
         //printf("First-->n:%d\n",n);
         if(n==0)
         {
             for(int j=i+1;j<len;j++)
         {
             res=n*10+ch1[j]-'\0';
             n=res%b;

         }
         if(n==0)
         {
             printf("YES\n");
             printf("%s\n",ch1);
             for(int j=i+1;j<len;j++)
                printf("%c",ch[j]);
             printf("\n");
             k++;
             break;
         }

             if(k!=0)
                 break;
         }5
         if(k!=0)
             break;
     }
    return 0;
}
